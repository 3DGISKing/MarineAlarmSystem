#include "mainwindow.h"
#include "marinesystem.h"
#include "config.h"

#include <QGridLayout>
#include <QMessageBox>
#include <QSplashScreen>
#include <QDockWidget>
#include <QProgressBar>
#include <QLabel>
#include <QLineEdit>
#include <QCloseEvent>
#include <QDesktopWidget>
#include <QTabWidget>

#include "gui/qgsmapcanvas.h"
#include <gui/qgsmaptoolzoom.h>
#include <gui/qgsmaptoolpan.h>
#include <app/qgsmeasuretool.h>
#include <app/qgsmaptoolmeasureangle.h>
#include "qgsproject.h"
#include "gui/layertree/qgslayertreeview.h"
#include "core/layertree/qgslayertreemodel.h"
#include "gui/layertree/qgslayertreemapcanvasbridge.h"

#include "core/qgsfeaturerequest.h"
#include "core/qgsvectorlayer.h"
#include "core/qgsmaplayerregistry.h"
#include "core/qgsgeometry.h"
#include "gui/qgsscalecombobox.h"
#include "core/qgsvectordataprovider.h"

#include "marinesystemlogic.h"
#include "marineoptiondlg.h"
#include "marineshipinformationwidget.h"
#include "marinelogsearchdlg.h"
#include "marinemultimediaviewer.h"
#include "marinesendreceivewidget.h"

#define TB_ICON_WIDTH   24 // ToolBar Icon Width
#define TB_ICON_HEIGHT  24 // ToolBar Icon Height
#define TB_BACKGROUND	0xD5EAFF

MainWindow::MainWindow(QSplashScreen* splash, QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
	,mSplash(splash)
	, mMousePrecisionDecimalPlaces( 0 )
{
	ui.setupUi(this);

	g_app->SetMainWindow(this);

	setWindowTitle(tr("MarinSystem"));
	setIcon();

	updateMenuBar(g_app->GetConfig()->m_showMenubar);

	QSettings settings;

	QWidget *centralWidget = this->centralWidget();
	QGridLayout *centralLayout = new QGridLayout( centralWidget );
	centralWidget->setLayout( centralLayout );
	centralLayout->setContentsMargins( 0, 0, 0, 0 );

	// "theMapCanvas" used to find this canonical instance later
	mMapCanvas = new QgsMapCanvas( centralWidget, "theMapCanvas" );
	mMapCanvas->setWhatsThis( tr( "Map canvas. This is where raster and vector "
		"layers are displayed when added to the map" ) );

	// set canvas color right away
	int myRed = settings.value( "/qgis/default_canvas_color_red", 255 ).toInt();
	int myGreen = settings.value( "/qgis/default_canvas_color_green", 255 ).toInt();
	int myBlue = settings.value( "/qgis/default_canvas_color_blue", 255 ).toInt();
	mMapCanvas->setCanvasColor( QColor( myRed, myGreen, myBlue ) );

	centralLayout->addWidget( mMapCanvas, 0, 0, 2, 1 );

	//set the focus to the map canvas
	mMapCanvas->setFocus();

	mLayerTreeView = new QgsLayerTreeView( this );
	mLayerTreeView->setObjectName( "theLayerTreeView" ); // "theLayerTreeView" used to find this canonical instance later

	createActionGroups();
	CreateTopArea();
	CreateRightArea();
	createStatusBar();
	createCanvasTools();
	mMapCanvas->freeze();
	createToolDocks();
	initLayerTreeView();

	createActions();

	ui.mainToolBar->hide();

	// Do this last in the ctor to ensure that all members are instantiated properly
	setupConnections();

	mMapCanvas->freeze(false);

	mSplash->showMessage( tr( "loading data..." ), Qt::AlignHCenter | Qt::AlignBottom );
	qApp->processEvents();

	openQGisProject();

	showStatusMessage("");

	MarineSystemLogic::instance();

	createLeftDock();
	createRightDock();

	MarineSystemLogic::instance()->zoomToShipLayer();

	ui.actionNavigateTool->setChecked(true);
	ui.actionMeasureTool->setChecked(true);

	showNavigetToolDock();
	showMeasureToolDock();

	if(!g_app->licenced())
		mMapCanvas->freeze(true);
}

MainWindow::~MainWindow()
{
	mMapCanvas->stopRendering();

	delete mMapTools.mZoomIn;
	delete mMapTools.mZoomOut;
	delete mMapTools.mPan;

	delete mMapTools.mMeasureAngle;
	delete mMapTools.mMeasureArea;
	delete mMapTools.mMeasureDist;

	QgsApplication::exitQgis();

	delete QgsProject::instance();

	MarineSystemLogic::instance()->release();
}

void MainWindow::setIcon()
{
	QIcon icon(":/images/images/themes/default/marinsystem.svg");
	if(icon.isNull() == false)
		setWindowIcon(icon);
}

void MainWindow::updateMenuBar(bool show)
{
	if (show)
		menuBar()->show();
	else
	{
		menuBar()->hide();
	}
}
void MainWindow::initUpdate()
{
	QRect rt = geometry();
	QRect fRt = frameGeometry();
	QRect rtTitle = m_TitleBar->geometry();
	QRect rtNavigate = mNavigateToolDock->geometry();
	QRect rtMeasure = mMeasureToolDock->geometry();

	int x = rtTitle.x() + rtTitle.width() - 13;
	int y = menuBar()->isVisible() ? menuBar()->geometry().height() : 0;
	y = y + rt.y() + rtTitle.height() + 3;

	mMeasureToolDock->setFloating(true);
	mMeasureToolDock->move(x - rtMeasure.width(), y);

	mNavigateToolDock->setFloating(true);
	mNavigateToolDock->move(x - rtMeasure.width() - rtNavigate.width() -75, y);
}

void MainWindow::createToolDocks()
{
	createNavigateToolDock();
	createMeasureToolDock();
}

bool MainWindow::createNavigateToolDock()
{
	QColor bgColor(TB_BACKGROUND);
	QString colorSheet = QString("background-color: %1").arg(bgColor.name());

	mNavigateToolBar = new QToolBar(tr("Navigate Tool"), this);
	if (mNavigateToolBar == NULL)
		return false;

	mNavigateToolBar->setMovable(true);
	mNavigateToolBar->setIconSize(QSize(TB_ICON_WIDTH, TB_ICON_HEIGHT));

	mNavigateToolBar->addAction(ui.mActionZoomIn);
	mNavigateToolBar->addAction(ui.mActionZoomOut);
	mNavigateToolBar->addAction(ui.mActionPan);
	mNavigateToolBar->addAction(ui.mActionZoomFullExtent);
	mNavigateToolBar->addAction(ui.mActionZoomLast);
	mNavigateToolBar->addAction(ui.mActionZoomNext);

	mNavigateToolDock = new QDockWidget( tr( "Navigate" ), this, Qt::Tool );
	mNavigateToolDock->setObjectName( "Navigate Tools" );
	mNavigateToolDock->setAllowedAreas(Qt::NoDockWidgetArea);
	mNavigateToolDock->setFeatures(QDockWidget::DockWidgetMovable|QDockWidget::DockWidgetFloatable );

	mNavigateToolDock->setWidget( mNavigateToolBar );

	QLabel* lbl;
	lbl = new QLabel(this);
	lbl->setStyleSheet("font:8pt \"PRK P Gothic\"; background-color:#FED5A6;color: #882D1E;border-radius:0px;");
	lbl->setText(tr("Navigate"));
	lbl->setMaximumHeight(15);
	lbl->setMaximumWidth(170);

	mNavigateToolDock->setTitleBarWidget(lbl);

	mNavigateToolDock->setMaximumWidth(170);
	mNavigateToolDock->setWindowOpacity(0.8);

	return true;
}

bool MainWindow::createMeasureToolDock()
{
	QColor bgColor(TB_BACKGROUND);
	QString colorSheet = QString("background-color: %1").arg(bgColor.name());

	mMeasureToolBar = new QToolBar(tr("Measure Tool"), this);
	if (mMeasureToolBar == NULL)
		return false;

	mMeasureToolBar->setMovable(true);
	mNavigateToolBar->setIconSize(QSize(TB_ICON_WIDTH, TB_ICON_HEIGHT));

	mMeasureToolBar->addAction(ui.mActionMeasure);
	mMeasureToolBar->addAction(ui.mActionMeasureArea);
	mMeasureToolBar->addAction(ui.mActionMeasureAngle);

	mMeasureToolDock = new QDockWidget( tr( "Measure" ), this, Qt::Tool);
	mMeasureToolDock->setObjectName( "Measure Tools" );
	mMeasureToolDock->setAllowedAreas(Qt::NoDockWidgetArea);
	mMeasureToolDock->setFeatures(QDockWidget::DockWidgetMovable|QDockWidget::DockWidgetFloatable );

	mMeasureToolDock->setWidget( mMeasureToolBar );

	QLabel* lbl;
	lbl = new QLabel(this);
	lbl->setStyleSheet("font:8pt \"PRK P Gothic\"; background-color:#FED5A6;color: #882D1E;border-radius:0px;");
	lbl->setText(tr("Measure"));
	lbl->setMaximumHeight(15);
	lbl->setMaximumWidth(85);

	mMeasureToolDock->setTitleBarWidget(lbl);

	mMeasureToolDock->setMaximumWidth(85);
	mMeasureToolDock->setWindowOpacity(0.8);

	return true;
}

#include "marinetitlelabel.h"

void MainWindow::CreateTopArea()
{
	m_TitleBar= new QToolBar(this);
	m_TitleBar->setContentsMargins(0,0,0,0);

	QString toptoolbarstyle="QToolBar {background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 rgb(255, 255, 255), stop:0.2 rgb(249, 206, 154)); border-style:none;}";

	m_TitleBar->setStyleSheet(toptoolbarstyle);

	this->addToolBar(m_TitleBar);

	int emptylabelwidth=15;

	QLabel * empty=new QLabel();

	empty->setMinimumWidth(emptylabelwidth);

	m_TitleBar->addWidget(empty);

	MarineTitleLabel * marklabel=new MarineTitleLabel();

	marklabel->setPixmap(QPixmap(":/images/images/themes/default/tittle.svg"));
	m_TitleBar->addWidget(marklabel);

	QLabel* label=new QLabel();
	label->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
	m_TitleBar->addWidget(label);

	QLabel* emptymidlabel=new QLabel();
	emptymidlabel->setMinimumWidth(5);
	emptymidlabel->setMaximumWidth(5);

	m_TitleBar->addWidget(emptymidlabel);

	m_TitleBar->addAction(ui.actionNavigateTool);
	m_TitleBar->addWidget(emptymidlabel);

	m_TitleBar->addAction(ui.actionMeasureTool);
	m_TitleBar->addWidget(emptymidlabel);

	m_TitleBar->addAction(ui.actionHistoryTool);
	m_TitleBar->addWidget(emptymidlabel);

	m_TitleBar->addAction(ui.actionSetting);
	QLabel* separatelabel=new QLabel();
	separatelabel->setMinimumWidth(25);
	separatelabel->setMaximumWidth(25);
	m_TitleBar->addWidget(separatelabel);
	
	m_TitleBar->addAction(ui.actionHelp);
	m_TitleBar->addWidget(emptymidlabel);
	
	m_TitleBar->addAction(ui.actionExit);

	QLabel* emptyendlabel=new QLabel();
	emptyendlabel->setMinimumWidth(emptylabelwidth);

	m_TitleBar->addWidget(emptyendlabel);

	m_TitleBar->setMinimumHeight(44);
	m_TitleBar->setMovable(false);

}

void MainWindow::CreateRightArea()
{
	QToolBar* righttoolbar=new QToolBar();

	righttoolbar= new QToolBar(this);

	QString righttoolbarstyle = "background: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, ";
	righttoolbarstyle += "stop: 0 rgb(255, 255, 255), stop: 0.8 rgb(249, 206, 154)); border-style:none;";

	righttoolbar->setStyleSheet(righttoolbarstyle);

	this->addToolBar(Qt::RightToolBarArea,righttoolbar);

	righttoolbar->setMinimumHeight(30);
	righttoolbar->setMovable(false);
}

void MainWindow::showNavigetToolDock()
{
	if (ui.actionNavigateTool->isChecked())
		mNavigateToolDock->show();
	else
		mNavigateToolDock->hide();
}
void MainWindow::showMeasureToolDock()
{
	if (ui.actionMeasureTool->isChecked())
		mMeasureToolDock->show();
	else
		mMeasureToolDock->hide();
}
void MainWindow::showLogSearchDlg()
{
	static MarineLogSearchInputWidet * dlg = new MarineLogSearchInputWidet(this);

	dlg->show();
}

void MainWindow::showSetting()
{
	MarineOptionDlg dlg;
	dlg.exec();
}

void MainWindow::createCanvasTools()
{
	// create tools
	mMapTools.mZoomIn = new QgsMapToolZoom( mMapCanvas, false /* zoomIn */ );
	mMapTools.mZoomIn->setAction( ui.mActionZoomIn );

	mMapTools.mZoomOut = new QgsMapToolZoom( mMapCanvas, true /* zoomOut */ );
	mMapTools.mZoomOut->setAction( ui.mActionZoomOut );

	mMapTools.mPan = new QgsMapToolPan( mMapCanvas );
	mMapTools.mPan->setAction( ui.mActionPan );

	mMapTools.mMeasureDist = new QgsMeasureTool(mMapCanvas, false);
	mMapTools.mMeasureDist->setAction( ui.mActionMeasure );
	mMapTools.mMeasureArea = new QgsMeasureTool( mMapCanvas, true /* area */ );
	mMapTools.mMeasureArea->setAction( ui.mActionMeasureArea );
	mMapTools.mMeasureAngle = new QgsMapToolMeasureAngle( mMapCanvas );
	mMapTools.mMeasureAngle->setAction( ui.mActionMeasureAngle );
}

void MainWindow::createStatusBar()
{
	//remove borders from children under Windows
	statusBar()->setStyleSheet( "QStatusBar::item {border: none;}" );

	// Add a panel to the status bar for the scale, coords and progress
	// And also rendering suppression checkbox
	mProgressBar = new QProgressBar( statusBar() );
	mProgressBar->setObjectName( "mProgressBar" );
	mProgressBar->setMaximumWidth( 100 );
	mProgressBar->hide();
	mProgressBar->setWhatsThis( tr( "Progress bar that displays the status "
		"of rendering layers and other time-intensive operations" ) );
	statusBar()->addPermanentWidget( mProgressBar, 1 );

	connect( mMapCanvas, SIGNAL( renderStarting() ), this, SLOT( canvasRefreshStarted() ) );
	connect( mMapCanvas, SIGNAL( mapCanvasRefreshed() ), this, SLOT( canvasRefreshFinished() ) );

	// Bumped the font up one point size since 8 was too
	// small on some platforms. A point size of 9 still provides
	// plenty of display space on 1024x768 resolutions
	QFont myFont( "Arial", 9 );

	statusBar()->setFont( myFont );

	// add a label to show current scale
	mCoordsLabel = new QLabel( QString(), statusBar() );
	mCoordsLabel->setObjectName( "mCoordsLabel" );
	mCoordsLabel->setFont( myFont );
	mCoordsLabel->setMinimumWidth( 10 );
	mCoordsLabel->setMaximumHeight( 20 );
	mCoordsLabel->setMargin( 3 );
	mCoordsLabel->setAlignment( Qt::AlignCenter );
	mCoordsLabel->setFrameStyle( QFrame::NoFrame );
	mCoordsLabel->setText( tr( "Coordinate:" ) );
	mCoordsLabel->setToolTip( tr( "Current map coordinate" ) );
	statusBar()->addPermanentWidget( mCoordsLabel, 0 );

	//coords status bar widget
	mCoordsEdit = new QLineEdit( QString(), statusBar() );
	mCoordsEdit->setObjectName( "mCoordsEdit" );
	mCoordsEdit->setFont( myFont );
	mCoordsEdit->setMinimumWidth( 10 );
	mCoordsEdit->setMaximumWidth( 300 );
	mCoordsEdit->setMaximumHeight( 20 );
	mCoordsEdit->setContentsMargins( 0, 0, 0, 0 );
	mCoordsEdit->setAlignment( Qt::AlignCenter );
	mCoordsEdit->setAlignment( Qt::AlignCenter );
	QRegExp coordValidator( "[+-]?\\d+\\.?\\d*\\s*,\\s*[+-]?\\d+\\.?\\d*" );
	mCoordsEditValidator = new QRegExpValidator( coordValidator, mCoordsEdit );
	mCoordsEdit->setWhatsThis( tr( "Shows the map coordinates at the "
		"current cursor position. The display is continuously updated "
		"as the mouse is moved. It also allows editing to set the canvas "
		"center to a given position. The format is lat,lon or east,north" ) );
	mCoordsEdit->setToolTip( tr( "Current map coordinate (lat,lon or east,north)" ) );
	statusBar()->addPermanentWidget( mCoordsEdit, 0 );

	// add a label to show current scale
	mScaleLabel = new QLabel( QString(), statusBar() );
	mScaleLabel->setObjectName( "mScaleLable" );
	mScaleLabel->setFont( myFont );
	mScaleLabel->setMinimumWidth( 10 );
	mScaleLabel->setMaximumHeight( 20 );
	mScaleLabel->setMargin( 3 );
	mScaleLabel->setAlignment( Qt::AlignCenter );
	mScaleLabel->setFrameStyle( QFrame::NoFrame );
	mScaleLabel->setText( tr( "Scale " ) );
	mScaleLabel->setToolTip( tr( "Current map scale" ) );
	statusBar()->addPermanentWidget( mScaleLabel, 0 );

	mScaleEdit = new QgsScaleComboBox( statusBar() );
	mScaleEdit->setObjectName( "mScaleEdit" );
	mScaleEdit->setFont( myFont );
	// seems setFont() change font only for popup not for line edit,
	// so we need to set font for it separately
	mScaleEdit->lineEdit()->setFont( myFont );
	mScaleEdit->setMinimumWidth( 10 );
	mScaleEdit->setMaximumWidth( 100 );
	mScaleEdit->setMaximumHeight( 20 );
	mScaleEdit->setContentsMargins( 0, 0, 0, 0 );
	mScaleEdit->setWhatsThis( tr( "Displays the current map scale" ) );
	mScaleEdit->setToolTip( tr( "Current map scale (formatted as x:y)" ) );

	statusBar()->addPermanentWidget( mScaleEdit, 0 );
	connect( mScaleEdit, SIGNAL( scaleChanged() ), this, SLOT( userScale() ) );
}

void MainWindow::createActions()
{
	connect( ui.mActionPan, SIGNAL( triggered() ), this, SLOT( pan() ) );
	connect( ui.mActionZoomIn, SIGNAL( triggered() ), this, SLOT( zoomIn() ) );
	connect( ui.mActionZoomOut, SIGNAL( triggered() ), this, SLOT( zoomOut() ) );
	connect( ui.mActionZoomFullExtent, SIGNAL( triggered() ), this, SLOT( zoomFull() ) );
	connect( ui.mActionZoomLast, SIGNAL( triggered() ), this, SLOT( zoomToPrevious() ) );
	connect( ui.mActionZoomNext, SIGNAL( triggered() ), this, SLOT( zoomToNext() ) );
	connect( ui.mActionMeasure, SIGNAL( triggered() ), this, SLOT( measure() ) );
	connect( ui.mActionMeasureArea, SIGNAL( triggered() ), this, SLOT( measureArea() ) );
	connect( ui.mActionMeasureAngle, SIGNAL( triggered() ), this, SLOT( measureAngle() ) );
	connect(ui.actionNavigateTool, SIGNAL(triggered()), this, SLOT(showNavigetToolDock()));
	connect(ui.actionMeasureTool, SIGNAL(triggered()), this, SLOT(showMeasureToolDock()));
	connect(ui.actionHistoryTool, SIGNAL(triggered()), this, SLOT(showLogSearchDlg()));
	connect(ui.actionSetting, SIGNAL(triggered()), this, SLOT(showSetting()));
	connect(ui.actionExit, SIGNAL(triggered()), this, SLOT(exit()));
}

void MainWindow::zoomOut()
{
	mMapCanvas->setMapTool( mMapTools.mZoomOut );
}

void MainWindow::zoomIn()
{
	mMapCanvas->setMapTool( mMapTools.mZoomIn );
}


void MainWindow::pan()
{
	mMapCanvas->setMapTool( mMapTools.mPan );
}

void MainWindow::zoomFull()
{
	 mMapCanvas->zoomToFullExtent();
}

void MainWindow::zoomToPrevious()
{
	 mMapCanvas->zoomToPreviousExtent();
}

void MainWindow::zoomToNext()
{
	 mMapCanvas->zoomToNextExtent();
}

void MainWindow::measure()
{
	 mMapCanvas->setMapTool( mMapTools.mMeasureDist );
}


void MainWindow::measureArea()
{
	mMapCanvas->setMapTool( mMapTools.mMeasureArea );
}

void MainWindow::measureAngle()
{
	mMapCanvas->setMapTool( mMapTools.mMeasureAngle );
}

void MainWindow::userScale()
{
	// Why has MapCanvas the scale inverted?
	mMapCanvas->zoomScale( 1.0 / mScaleEdit->scale() );
}

void MainWindow::createActionGroups()
{
	// Map Tool Group
	mMapToolGroup = new QActionGroup( this );

	mMapToolGroup->addAction( ui.mActionPan );
	mMapToolGroup->addAction( ui.mActionZoomIn );
	mMapToolGroup->addAction( ui.mActionZoomOut );
	mMapToolGroup->addAction( ui.mActionZoomFullExtent );
	mMapToolGroup->addAction( ui.mActionZoomLast );
	mMapToolGroup->addAction( ui.mActionZoomNext );
	mMapToolGroup->addAction( ui.mActionMeasure );
	mMapToolGroup->addAction( ui.mActionMeasureArea );
	mMapToolGroup->addAction( ui.mActionMeasureAngle );
}


void MainWindow::openQGisProject()
{
	QApplication::setOverrideCursor( Qt::WaitCursor );

	QString path = QCoreApplication::applicationDirPath() + "\\data.qgs";

	QgsProject::instance()->setFileName(path);

	if(!QgsProject::instance()->read(path))
	{
		QApplication::restoreOverrideCursor();
		statusBar()->clearMessage();

		QMessageBox::critical( this, tr( "MarineSystem" ), tr( "Failed to load data!" ) );
		mMapCanvas->freeze( false );
		mMapCanvas->refresh();
		
		QApplication::restoreOverrideCursor();

		return;
	}  

	QApplication::restoreOverrideCursor();
}

void MainWindow::setupConnections()
{
	// signal when mouse moved over window (coords display in status bar)
	connect( mMapCanvas, SIGNAL( xyCoordinates( const QgsPoint & ) ),
		this, SLOT( showMouseCoordinate( const QgsPoint & ) ) );
	connect( mMapCanvas, SIGNAL( extentsChanged() ),
		this, SLOT( showExtents() ) );
	connect( mMapCanvas, SIGNAL( scaleChanged( double ) ),
		this, SLOT( showScale( double ) ) );
	connect( mMapCanvas, SIGNAL( scaleChanged( double ) ),
		this, SLOT( updateMouseCoordinatePrecision() ) );

	connect( mMapCanvas, SIGNAL( zoomLastStatusChanged( bool ) ),
	    ui.mActionZoomLast, SLOT( setEnabled( bool ) ) );
	connect( mMapCanvas, SIGNAL( zoomNextStatusChanged( bool ) ),
		ui.mActionZoomNext, SLOT( setEnabled( bool ) ) );

	connect( QgsProject::instance(), SIGNAL( loadingLayer( QString ) ),
		this, SLOT( showStatusMessage( QString ) ) );
}

void MainWindow::showStatusMessage( QString theMessage )
{
	statusBar()->showMessage( theMessage );
}

void MainWindow::initLayerTreeView()
{
	QgsLayerTreeModel* model = new QgsLayerTreeModel( QgsProject::instance()->layerTreeRoot(), this );
	model->setFlag( QgsLayerTreeModel::AllowNodeReorder );
	model->setFlag( QgsLayerTreeModel::AllowNodeRename );
	model->setFlag( QgsLayerTreeModel::AllowNodeChangeVisibility );
	model->setAutoCollapseLegendNodes( 10 );

	mLayerTreeView->setModel( model );

	mLayerTreeCanvasBridge = new QgsLayerTreeMapCanvasBridge( QgsProject::instance()->layerTreeRoot(), mMapCanvas, this );
	connect( QgsProject::instance(), SIGNAL( writeProject( QDomDocument& ) ), mLayerTreeCanvasBridge, SLOT( writeProject( QDomDocument& ) ) );
	connect( QgsProject::instance(), SIGNAL( readProject( QDomDocument ) ), mLayerTreeCanvasBridge, SLOT( readProject( QDomDocument ) ) );
}

void MainWindow::showMouseCoordinate( const QgsPoint & p)
{
	if ( mMapCanvas->mapUnits() == QGis::Degrees )
	{
		QString format = QgsProject::instance()->readEntry( "PositionPrecision", "/DegreeFormat", "D" );

		if ( format == "DM" )
			mCoordsEdit->setText( p.toDegreesMinutes( mMousePrecisionDecimalPlaces ) );
		else if ( format == "DMS" )
			mCoordsEdit->setText( p.toDegreesMinutesSeconds( mMousePrecisionDecimalPlaces ) );
		else
			mCoordsEdit->setText( p.toString( mMousePrecisionDecimalPlaces ) );
	}
	else
	{
		mCoordsEdit->setText( p.toString( mMousePrecisionDecimalPlaces ) );
	}

	if ( mCoordsEdit->width() > mCoordsEdit->minimumWidth() )
	{
		mCoordsEdit->setMinimumWidth( mCoordsEdit->width() );
	}
}

void MainWindow::showScale( double theScale )
{
	// Why has MapCanvas the scale inverted?
	mScaleEdit->setScale( 1.0 / theScale );

	// Not sure if the lines below do anything meaningful /Homann
	if ( mScaleEdit->width() > mScaleEdit->minimumWidth() )
	{
		mScaleEdit->setMinimumWidth( mScaleEdit->width() );
	}
}

void MainWindow::showExtents()
{
	// allow symbols in the legend update their preview if they use map units
	mLayerTreeView->layerTreeModel()->setLegendMapViewData( mMapCanvas->mapUnitsPerPixel(), mMapCanvas->mapSettings().outputDpi(), mMapCanvas->scale() );

	// update the statusbar with the current extents.
	QgsRectangle myExtents = mMapCanvas->extent();
	mCoordsLabel->setText( tr( "Extents:" ) );
	mCoordsEdit->setText( myExtents.toString( true ) );
	//ensure the label is big enough
	if ( mCoordsEdit->width() > mCoordsEdit->minimumWidth() )
	{
		mCoordsEdit->setMinimumWidth( mCoordsEdit->width() );
	}
}

void MainWindow::updateMouseCoordinatePrecision()
{
	// Work out what mouse display precision to use. This only needs to
	// be when the settings change or the zoom level changes. This
	// function needs to be called every time one of the above happens.

	// Get the display precision from the project settings
	bool automatic = QgsProject::instance()->readBoolEntry( "PositionPrecision", "/Automatic" );
	int dp = 0;

	if ( automatic )
	{
		// Work out a suitable number of decimal places for the mouse
		// coordinates with the aim of always having enough decimal places
		// to show the difference in position between adjacent pixels.
		// Also avoid taking the log of 0.
		if ( mMapCanvas->mapUnitsPerPixel() != 0.0 )
			dp = static_cast<int>( ceil( -1.0 * log10( mMapCanvas->mapUnitsPerPixel() ) ) );
	}
	else
		dp = QgsProject::instance()->readNumEntry( "PositionPrecision", "/DecimalPlaces" );

	// Keep dp sensible
	if ( dp < 0 )
		dp = 0;

	mMousePrecisionDecimalPlaces = dp;
}

void MainWindow::canvasRefreshStarted()
{
	showProgress( -1, 0 ); // trick to make progress bar show busy indicator
}

void MainWindow::canvasRefreshFinished()
{
	showProgress( 0, 0 ); // stop the busy indicator
}

// slot to update the progress bar in the status bar
void MainWindow::showProgress( int theProgress, int theTotalSteps )
{
	if ( theProgress == theTotalSteps )
	{
		mProgressBar->reset();
		mProgressBar->hide();
	}
	else
	{
		//only call show if not already hidden to reduce flicker
		if ( !mProgressBar->isVisible() )
		{
			mProgressBar->show();
		}
		mProgressBar->setMaximum( theTotalSteps );
		mProgressBar->setValue( theProgress );

		if ( mProgressBar->maximum() == 0 )
		{
			// for busy indicator (when minimum equals to maximum) the oxygen Qt style (used in KDE)
			// has some issues and does not start busy indicator animation. This is an ugly fix
			// that forces creation of a temporary progress bar that somehow resumes the animations.
			// Caution: looking at the code below may introduce mild pain in stomach.
			if ( strcmp( QApplication::style()->metaObject()->className(), "Oxygen::Style" ) == 0 )
			{
				QProgressBar pb;
				pb.setAttribute( Qt::WA_DontShowOnScreen ); // no visual annoyance
				pb.setMaximum( 0 );
				pb.show();
				qApp->processEvents();
			}
		}

	}
}


void MainWindow::closeEvent( QCloseEvent * event )
{
	event->ignore();
	exit();
}

void MainWindow::exit()
{
	if ( QMessageBox::question(NULL, QString::fromLocal8Bit("·ÏËÁ"), QString::fromLocal8Bit("Â£µá°ûµ½Ë¾ Äù³­»¤±Ê»¡³£Ä´?"), QMessageBox::Yes|QMessageBox::No) == QMessageBox::Yes )
	{
		QApplication::exit();
		return;
	}
}

void MainWindow::createLeftDock()
{
	mLeftDock = new QDockWidget( "", this );
	mLeftDock->setAllowedAreas( Qt::RightDockWidgetArea );

	QTabWidget* tabwidget = new QTabWidget(this);

	tabwidget->setTabPosition(QTabWidget::South);

	mMarineShipInformationWidget = new MarineShipInformationWidget();

	tabwidget->addTab(mMarineShipInformationWidget, QIcon(":/images/images/themes/default/boat.svg"), tr("ship"));

	tabwidget->addTab(mLayerTreeView, QIcon(":/images/images/themes/default/layer.svg"), tr("layers"));

	mLeftDock->setWidget(tabwidget);

	QLabel* lbl = new QLabel(this);
	//lbl->setStyleSheet("font:8pt \"PRK P Gothic\"; background-color:#FED5A6;color: #882D1E;border-radius:0px;");
	lbl->setMaximumHeight(0);

	mLeftDock->setTitleBarWidget(lbl);
	//mLeftDock->setStyleSheet("background-color:#FED5A6;color: #882D1E;border-radius:0px;");

	addDockWidget( Qt::LeftDockWidgetArea, mLeftDock );
}

void MainWindow::createRightDock()
{
	mRightDock = new QDockWidget( "", this );

	mRightDock->setAllowedAreas( Qt::RightDockWidgetArea );
	mRightDock->setStyleSheet("background-color:#FED5A6;color: #882D1E;border-radius:0px;");

	QLabel* lbl = new QLabel(this);
	lbl->setMaximumHeight(0);
	lbl->setMinimumHeight(0);

	mRightDock->setTitleBarWidget(lbl);

	int width =g_app->GetConfig()->m_rightDockWidth;

	QWidget* widget = new QWidget(this);

	QVBoxLayout * vlayout = new QVBoxLayout();

	vlayout->setContentsMargins(0,0,0,0);
	MarineMultimediaViewer* w = new MarineMultimediaViewer();

	w->setMaximumWidth(width);
	w->setMinimumHeight(width);
	w->setMaximumHeight(width);

	MarineLogSearchInputWidet* w1= new MarineLogSearchInputWidet();

	w1->setMaximumWidth(width);

	vlayout->addWidget(w);

	MarineSendReceiveWidget* w2 = new MarineSendReceiveWidget();
	vlayout->addWidget(w2);

	vlayout->addWidget(w1);

	widget->setLayout(vlayout);

	mRightDock->setWidget(widget);

	addDockWidget( Qt::RightDockWidgetArea, mRightDock );
}