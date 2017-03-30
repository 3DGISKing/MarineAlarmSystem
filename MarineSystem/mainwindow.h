#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>

#include "ui_mainwindow.h"

#include "qgisimport.h"
#include "qgspoint.h"
#include "qgsrectangle.h"

class QgsMapCanvas;
class QgsMapTool;
class QActionGroup;
class QSplashScreen;
class QgsLayerTreeView;
class QgsLayerTreeMapCanvasBridge;
class QgsMapLayer;
class QgsVectorLayer;

class QDockWidget;
class QProgressBar;
class QLabel;
class QgsScaleComboBox;
class QLineEdit;
class QValidator;
class QClostEvent;

class MarineShipInformationWidget;

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QSplashScreen* splash, QWidget *parent = 0, Qt::WFlags flags = 0);
	~MainWindow();
	QgsMapCanvas* mapCanvas() {return mMapCanvas ;}
	
	void initUpdate();
	void updateMenuBar(bool show);
	MarineShipInformationWidget* marineShipInformationWidget() { return mMarineShipInformationWidget; }

protected:
	void closeEvent ( QCloseEvent * event );

private:
	void createActions();
	void createCanvasTools();
	void createActionGroups();
	void createStatusBar();
	void createToolDocks();
	bool createNavigateToolDock();
	bool createMeasureToolDock();

	void CreateTopArea();
	void CreateRightArea();

	void createLeftDock();
	void createRightDock();

	void openQGisProject();
	void setupConnections();
	void initLayerTreeView();
	
	void setIcon();

private slots:
	//! Set map tool to Zoom out
	void zoomOut();
	//! Set map tool to Zoom in
	void zoomIn();
	//! Set map tool to pan
	void pan();
	//! Zoom to full extent
	void zoomFull();
	//! Zoom to the previous extent
	void zoomToPrevious();
	//! Zoom to the forward extent
	void zoomToNext();
	
	void measure();
	void measureArea();
	void measureAngle();

	void showStatusMessage( QString theMessage );

	//! Slot to show the map coordinate position of the mouse cursor
	void showMouseCoordinate( const QgsPoint & );
	//! Slot to show current map scale;
	void showScale( double theScale );

	void showExtents();
	void updateMouseCoordinatePrecision();

	//! start "busy" progress bar
	void canvasRefreshStarted();
	//! stop "busy" progress bar
	void canvasRefreshFinished();
	void showProgress( int theProgress, int theTotalSteps );
	void userScale();
	void showNavigetToolDock();
	void showMeasureToolDock();
	void showLogSearchDlg();
	void showSetting();
	
	void exit();
private:
	//! Map canvas	
	QgsMapCanvas *mMapCanvas;

	class Tools
	{
	public:
		QgsMapTool* mZoomIn;
		QgsMapTool* mZoomOut;
		QgsMapTool* mPan;

		QgsMapTool* mMeasureDist;
		QgsMapTool* mMeasureArea;
		QgsMapTool* mMeasureAngle;
	} mMapTools;

    QActionGroup *mMapToolGroup;
	QSplashScreen *mSplash;

	QgsLayerTreeView           *mLayerTreeView;
	QgsLayerTreeMapCanvasBridge*mLayerTreeCanvasBridge;

	// docks ------------------------------------------
	QDockWidget *mNavigateToolDock;
	QDockWidget *mMeasureToolDock;
	QDockWidget *mLeftDock;
	QDockWidget *mRightDock;

	// toolbar --------------------------------------

	QToolBar	*mNavigateToolBar;
	QToolBar	*mMeasureToolBar;

	//! Widget that will live on the statusbar to display "scale 1:"
	QLabel * mScaleLabel;
	//! Widget that will live on the statusbar to display scale value
	QgsScaleComboBox * mScaleEdit;
	//! The validator for the mScaleEdit
	QValidator * mScaleEditValidator;
	//! Widget that will live on the statusbar to display "Coordinate / Extent"
	QLabel * mCoordsLabel;
	//! Widget that will live in the statusbar to display and edit coords
	QLineEdit * mCoordsEdit;
	//! The validator for the mCoordsEdit
	QValidator * mCoordsEditValidator;
	//! Widget that will live in the statusbar to show progress of operations
	//! Widget that will live in the statusbar to show progress of operations
	QProgressBar * mProgressBar;

	//! The number of decimal places to use if not automatic
	unsigned int mMousePrecisionDecimalPlaces;

	MarineShipInformationWidget* mMarineShipInformationWidget;

private:
	Ui::MainWindowClass ui;

	QToolBar*       m_TitleBar;
};

#endif // MAINWINDOW_H
