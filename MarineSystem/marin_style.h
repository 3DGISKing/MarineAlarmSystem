#ifndef MARIN_STYLE_H
#define MARIN_STYLE_H

#define GENERALSTYLE "		\
/*------------	Common	------------------*/		\
*{\
	font: 11pt \"PRK P Chongbong\";			\
	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #FFFAEA, stop:1 #FED5A6);		\
	border-radius:3px;		\
	border: 1px solid #800F1B;		\
	color: #000066;		\
}		\
/*------------	QFrame	--------------*/		\
QFrame {border:0px;}		\
		\
/*------------	QAbstractButton	--------------*/		\
QAbstractButton	{ height: 20px; border: 0px; background-color: rgba(0,0,0,0);}		\
		\
/*------------	QPushButton	--------------*/		\
QPushButton			{ padding-left: 8px; padding-right: 8px; padding-bottom: 2px; border: 1px solid #800F1B; border-radius:5px; 		\
background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:0.0113636, y2:0.517, stop:0 #FFC49A, stop:0.920455 #FFFAEA); }		\
QPushButton:hover	{ background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:0.0113636, y2:0.517, stop:0 #FEDAB7, stop:0.920455 #FFFAEA);	\
					border:1px solid #F28A24; }		\
QPushButton:pressed	{ background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:0.0113636, y2:0.517, stop:0 #FFFAEA, stop:0.920455 #FFC49A); }		\
QPushButton:checked	{ background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:0.0113636, y2:0.5, stop:0 #FEF9E9, stop:0.8 #FEC399); }		\
QPushButton:disabled{ color:#82878C; background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:0.0113636, y2:0.517, stop:0 #FFFBF2, stop:0.920455 #DFBFB1); }		\
/*QPushButton:focus	{ border: 1px solid #CC9966; }*/		\
		\
/*------------  QComboBox  ---------------*/		\
QComboBox					{ background-color: #FFFBF2; border: 1px solid #800F1B;	border-radius: 2px; }		\
QComboBox:disabled			{ color:#82878C; background-color: #E7E8E8;  border: 1px solid #CEC6B5; border-radius: 2px;}		\
QComboBox QAbstractItemView { background-color: #FFFAEA; selection-background-color: #FED2B7; selection-color: #E30035; border: 1px solid #FFFAEA; }		\
		\
/*------------	QTableView	-------------*/		\
QTableView { color:#000066; background-color: #FFFAEE; background-attachment: scroll; border: 1px solid #800F1B; selection-color:#E30035;		\
selection-background-color: #FFE5C9; selection-color:#E30035;}		\
QTableView::item:hover { background-color: #FFE5C9; }		\
		\
/*------------	QTreeView	-------------*/		\
QTreeView {	background-color: rgba(0,0,0,0); border-radius:2px;	color:#000066;}		\
QTreeView::item{ selection-background-color: #FFE5C9; selection-color:#E30035; min-height:20px; border:1px;}		\
QTreeView::item:selected{ background: #FFE5C9;}		\
QTreeView::item:hover { background: qlineargradient(spread:reflect, x1:0, y1:0, x2:0.0113636, y2:0.517, stop:0 #FFFAEA, stop:0.7 #FED9B7); }		\
		\
/*------------	QListView	--------------*/		\
QListView { color:#000066; background-color: #FFFAE5; border: 1px solid #800F1B; border-radius:2px; show-decoration-selected: 1; }		\
QListView::item { selection-background-color: #FFE5C9; selection-color:#E30035; min-height:20px; }		\
QListView::item:hover { background-color: #FFE5C9; }		\
		\
/*------------	QHeaderView	--------------*/		\
QHeaderView { background-color: rgba(0,0,0,0);}		\
QHeaderView::section { color: #800F1B; select-color: #800F1B; padding-left: 2px; padding-right: 2px; border: 1px solid #FFFAE5;		\
background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:0.0113636, y2:0.517, stop:0 #FFC49A, stop:0.920455 #FFFAEA); }		\
QHeaderView::section:checked { color: #800F1B; }		\
		\
/*------------  QDateTimeEdit, QDateEdit, QTimeEdit,  ---------------*/		\
QDateTimeEdit, QDateEdit, QTimeEdit { background-color: #FFFBF2; border: 1px solid #800F1B;	border-radius: 2px; }		\
		\
/*------------	QGroupBox	--------------*/		\
QGroupBox { border: 1px solid #800F1B; border-radius: 5px; margin-top: 10px; background-color: rgba(0,0,0,0);}		\
QGroupBox::title { subcontrol-origin: margin; left :10px; }		\
		\
/*------------	QLineEdit	--------------*/		\
QLineEdit			{ background-color: #FFFBF2; border: 1px solid #800F1B; border-radius: 2px; }		\
QLineEdit:disabled 	{ color:#82878C; background-color: #E7E8E8; border: 1px solid #CEC6B5; border-radius: 2px;}		\
		\
/*------------	TreeLineEdit	--------------*/		\
TreeLineEdit	{ background-color: #FDE48E; border: 1px solid #800F1B;}		\
		\
/*------------	QSpinBox ---------------------*/		\
QSpinBox			{ background-color: #FFFBF2; border: 1px solid #800F1B;	border-radius: 2px; }		\
QSpinBox:disabled 	{ color:#82878C; background-color: #E7E8E8; border: 1px solid #CEC6B5; border-radius: 2px;}		\
		\
/*------------	QDoubleSpinBox ---------------------*/		\
QDoubleSpinBox			{ background-color: #FFFBF2; border: 1px solid #800F1B;	border-radius: 2px; }		\
QDoubleSpinBox:disabled { color:#82878C; background-color: #E7E8E8; border: 1px solid #CEC6B5; border-radius: 2px;}		\
		\
/*------------	QMenubar	------------------*/		\
QMenuBar { border : 0px; border-radius: 0px;}		\
		\
/*------------	QMenu	------------------*/		\
QMenu { border : 1px solid #FFFAEA;	border-radius : 3px; }		\
QMenu::item:selected{ background : #FED5A6;	color : #0000FF; }		\
		\
/*------------ .QMessageBox QPushButton	--*/		\
.QMessageBox QPushButton { min-width: 60px;	min-height:23px;}		\
		\
/*------------	QTextEdit	-------------*/		\
QTextEdit { background-color: #FFFBF2; border: 1px solid #800F1B;	border-radius: 2px; }		\
QTextEdit:disabled	{ color:#82878C; background-color: #E7E8E8; border: 1px solid #CEC6B5;	border-radius: 2px;}		\
		\
/*------------	QProgressBar	--------------*/		\
QProgressBar { border-radius: 2px; text-align: right; }		\
QProgressBar::chunk { background-color: #0D852C; width: 20px; }		\
		\
/*------------	QStatusbar	------------------*/		\
QStatusBar			{	border : 0px; border-radius: 0px;}		\
		\
/*------------	QScrollArea	--------------*/		\
QScrollArea	{ border: 1px solid #800F1B; background: #E0E9F7; width: 15px;	margin: 0;}		\
QScrollArea#wgtCondition	{ font:11pt;}		\
QScrollArea#lstObject	{ font:11pt;}		\
		\
/*------------	QScrollBar	--------------*/		\
QScrollBar:horizontal { border: 1px solid #FFFAEA; background: #FFFAE5; height: 18px; margin: 0px 18px 0px 18px; }		\
QScrollBar::handle:horizontal { background: #FED2B9; min-width: 20px; }		\
QScrollBar::add-line:horizontal { border: 1px solid #FFFAEA; background: #FED9B9; width: 17px; subcontrol-position: right; subcontrol-origin: margin; }		\
QScrollBar::sub-line:horizontal { border: 1px solid #FFFAEA; background: #FED2B9; width: 17px; subcontrol-position: left; subcontrol-origin: margin; }		\
		\
QScrollBar:vertical { border: 1px solid #FFFAEA; background: #FFFAE5; width: 18px; margin: 18px 0px 18px 0px; }		\
QScrollBar::handle:vertical { background: #FED2B9; min-height: 20px; }		\
QScrollBar::add-line:vertical { border: 1px solid #FFFAEA; background: #FED2B9; height: 17px; subcontrol-position: bottom; subcontrol-origin: margin; }		\
QScrollBar::sub-line:vertical { border: 1px solid #FFFAEA; background: #FED2B9; height: 17px; subcontrol-position: top; subcontrol-origin: margin; }		\
		\
/*------------	QSlider	------------------*/		\
QSlider::groove:horizontal { background: #ECA589; height: 2px; margin: 2px 0px; }		\
QSlider::handle:horizontal { background: #8DA6CE; border: 3px solid #800F1B; width: 13px; margin: -2px 0; border-radius: 3px; }		\
		\
/*------------	QTabWidget	--------------*/		\
QTabWidget::pane { left: 5px; border-radius:2px;}		\
QTabWidget::tab-bar { left: 8px; bottom:-1px; } 		\
		\
/*------------	QTabBar	-----------------*/		\
QTabBar { border :0px; background-color: rgba(0,0,0,0);}		\
QTabBar::tab { border:1px solid #800F1B; border-top-left-radius: 4px; border-top-right-radius: 4px; 		\
min-width: 80px; min-height: 20px;	padding: 2px; 		\
background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #FFFAEA, stop:1 #FED5A6);}		\
QTabBar::tab:hover{ background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:0.0113636, y2:0.8, stop:0 #F3D1AF, stop:0.920455 #FFFAEA); }		\
QTabBar::tab:selected { border-bottom-color: #FDF5ED; background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:0.0113636, y2:0.8, stop:0 #FED5A6, stop:0.920455 #FFFAEA); } 		\
QTabBar::tab:!selected { border-bottom-color: #FED5A6; color: #666666 }		\
		\
/*------------	QToolButton	-------------*/		\
QToolButton			{ border:0px; }		\
QToolButton:checked	{ border:1px solid #F29B46;	border-radius:3px; padding:-1px; 		\
background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:0.0113636, y2:0.517,	 stop:0 #FED5A6, stop:0.920455 #FFFAEA);}		\
QToolButton:hover	{ border:1px solid #F28A24;	border-radius:3px;  }		\
QToolButton::menu-indicator { image:url(:/images/images/images/toolbar/menu_down_indicator.png);subcontrol-origin:padding; subcontrol-position: bottom right; bottom:0px; right:1px; }		\
QToolButton::menu-indicator:pressed, QToolButton::menu-indicator:open { position: relative; top: 2px; left: 2px; }		\
		\
/*------------	QToolBar	-------------*/		\
QToolBar			{ border:0px;  border-radius: 0px;}		\
QToolBar#mainToolbox			{ border:0px; }		\
		\
/*------------	QDockWidget	-----------------*/		\
QDockWidget QToolButton::menu-indicator { image:url(:/images/images/images/toolbar/menu_indicator.png); subcontrol-origin:padding; subcontrol-position: bottom right; bottom:3px; }		\
QDockWidget QToolButton::menu-indicator:pressed, QToolButton::menu-indicator:open { position: relative; top: 2px; left: 2px; }		\
		\
/*------------	QLabel	--------------*/		\
QLabel,QCheckBox,QRadioButton,QSlider	{ background-color: rgba(0,0,0,0); border: 0px; }		\
		\
/*------------	QBoxLayout	-----------------*/		\
QBoxLayout  { border: 0px; }		\
		\
/*------------	Other	-----------------*/		\
QWidget QTabWidget#tabBar::pane { border:0px; }		\
QPushButton#btnPageFirst,QPushButton#btnPagePrev,QPushButton#btnPageNext,QPushButton#btnPageLast { backgorund : transparent; border:0px; }		\
QDockWidget#toolbox{ position: relative; top: 2px; left: 2px; }		\
QGroupBox#grpCondition	{border:0px;}		\
QVBoxLaout#lytViewIcons {border:0px;}		\
QLabel#lbltooltip		{background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #FFFAEA, stop:1 #FED5A6);}		\
.materialidentify QPushButton {border:0px;}		\
.materialidentify QPushButton::menu-indicator { image:url(""); subcontrol-origin:padding; subcontrol-position: bottom right; bottom:3px; }		\
.materialidentify QPushButton::menu-indicator:pressed, QPushButton::menu-indicator:open { position: relative; top: 2px; left: 2px; }		\
		\
.SpatialQueryDlg QPushButton {border:0px;}		\
.peoplesearch QPushButton {border:0px;}		\
.ShortestPathWidget QPushButton {border:0px;}		\
.VectorSearchGeneralWidget QPushButton {border:0px;}		\
.ShortestPathSettingDlg QPushButton {border:1px solid #5D8ED9;}	"

#define PYCITYSTYLE "		\
/*------------	default colors	------		\
	backgground : #D3DFF4 - rgb(211,223,244)		\
*/		\
/*------------	Common	------------------*/		\
*{		\
	font: 11pt \"PRK P Chongbong\";		\
	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #EEF2F8, stop:1 #F0F5FA);		\
	border-radius:3px;		\
}		\
/*------------  QComboBox  ---------------*/		\
QComboBox					{ background-color: #F7FAFC; 	border: 1px solid #5D8ED9;	border-radius: 2px; }		\
QComboBox:disabled			{ background-color: #E7E8E8; 	border: 1px solid #8DA6CE;	border-radius: 2px;}		\
QComboBox QAbstractItemView { background-color: #EBF4F9; selection-background-color: #E0E8F0; selection-color: #57341f; }		\
QComboBox QAbstractItemView { border: 0px solid #5D8ED9; font: 9pt;}		\
		\
/*------------  QDateTimeEdit, QDateEdit, QTimeEdit,  ---------------*/		\
QDateTimeEdit, QDateEdit, QTimeEdit{ background-color: #F7FAFC; 	border: 1px solid #5D8ED9;	border-radius: 2px; }		\
		\
/*------------	QDoubleSpinBox	----------*/		\
QDoubleSpinBox { background-color: #F7FAFC; border: 1px solid #5D8ED9;	border-radius: 2px; }		\
/*------------	QSpinBox	----------*/		\
QSpinBox { background-color: #F7FAFC; border: 1px solid #5D8ED9;	border-radius: 2px; }		\
		\
/*------------	QHeaderView	--------------*/		\
QHeaderView::section { color: #1A21B0;  padding-left: 4px;  border: 1px solid #EFF7FF;		\
			background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:0.0113636, y2:0.517, stop:0 #EFF7FF, stop:0.920455 #8BB6F7); }		\
QHeaderView::section:checked {  color: #1A21B0; }		\
		\
/*------------	QGroupBox	--------------*/		\
QGroupBox { border: 1px solid #5D8ED9; border-radius: 5px; margin-top: 2ex; }		\
QGroupBox::title { subcontrol-origin: margin; left :10px; }		\
		\
/*------------	QLineEdit	--------------*/		\
QLineEdit			{ background-color: #F7FAFC; border: 1px solid #5D8ED9;	border-radius: 2px; }		\
QLineEdit:disabled 	{ background-color: #E7E8E8; border: 1px solid #8DA6CE;	border-radius: 2px;}		\
		\
/*------------	QLineEdit	--------------*/		\
TreeLineEdit	{ background-color: rgb(253,235,254);}		\
		\
/*------------	QListView	--------------*/		\
QListView {	background-color: #F7FAFC;	border: 1px solid #5D8ED9;	border-radius:2px;  show-decoration-selected: 1;font-size:11pt;	color:#000066; }		\
QListView::item { selection-color:#E30035; selection-background-color: #fed0b4; }		\
QListView::item:selected { background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #A9C6EF, stop:0.920455 #E0E8F0);	}		\
QListView::item:hover { background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #CBE3FB, stop:0.920455 #E0E8F0); }		\
		\
/*------------	QMenu	------------------*/		\
QMenu				{	border : 1px solid #FFFAEA;	border-radius : 3px; }		\
QMenu::item:selected{ background : #A9C0FB;	color : #0000FF; }		\
		\
/*------------ .QMessageBox QPushButton	--*/		\
.QMessageBox QPushButton	{ min-width: 60px;	min-height:23px;}		\
		\
/*------------	QPlainTextEdit	----------*/		\
QPlainTextEdit 			{ background-color: #F7FAFC; border: 1px solid #5D8ED9;	border-radius: 2px; }		\
QPlainTextEdit:disabled { background-color: #E7E8E8; border: 1px solid #8DA6CE;	border-radius: 2px; }		\
			\
/*------------	QProcess	--------------*/		\
QProgressBar { border: 1px solid #5D8ED9; border-radius: 2px; text-align: right; }		\
QProgressBar::chunk { background-color: #0D852C; width: 20px; }		\
		\
/*------------	QPushButton	--------------*/		\
QPushButton			{ border:1px solid #5D8ED9;border-radius:5px; background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:0.0113636, y2:0.517, stop:0 #F0F5FA, stop:0.920455 #E0E8F0);}		\
QPushButton:hover	{ background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:0.0113636, y2:0.517, stop:0 #EFF7FF, stop:0.920455 #9BA2A5);}		\
QPushButton:pressed	{ background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:0.0113636, y2:0.517, stop:0 #EFF7FF, stop:0.920455 #9BA2A5);}		\
QPushButton:checked	{ background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:0.0113636, y2:0.517, stop:0 #EFF7FF, stop:0.920455 #9BA2A5);}		\
QPushButton:focus	{ border:1px solid #3659BC; }		\
		\
/*------------	QScrollArea	--------------*/		\
QScrollArea	{ border: 1px solid #5D8ED9; background: #E0E9F7; width: 15px;	margin: 0;}		\
QScrollArea#wgtCondition	{ font:9pt;}		\
QScrollArea#lstObject	{ font:9pt;}		\
		\
		\
/*------------	QScrollBar	--------------*/		\
QScrollBar:vertical { border: 1px solid #E0E9F7; background: #E0E9F7; width: 15px;	margin: 0; }		\
QScrollBar::handle:vertical {  background: #A3BADF; min-height: 20px; }		\
QScrollBar::add-line:vertical { border: 1px solid #E0E9F7; background: #E0E9F7; height: 0px; subcontrol-position: bottom; subcontrol-origin: margin; }		\
QScrollBar::sub-line:vertical { border: 1px solid #E0E9F7; background: #E0E9F7; height: 0px; subcontrol-position: top;subcontrol-origin: margin; }		\
QScrollBar:horizontal { border: 2px solid #E0E9F7; background: #E0E9F7; height: 15px;  margin: 0; }		\
QScrollBar::handle:horizontal { background: #A3BADF; min-width: 20px; }		\
QScrollBar::add-line:horizontal { background: #E0E9F7;border: 1px solid #E0E9F7; width: 0px; subcontrol-position: right; subcontrol-origin: margin;}		\
QScrollBar::sub-line:horizontal { background: #E0E9F7;border: 1px solid #E0E9F7; width: 0px; subcontrol-position: left;  subcontrol-origin: margin; padding:1px;}		\
		\
/*------------	QSlider	------------------*/		\
QSlider::groove:horizontal { background: #8DA6CE; height: 2px; margin: 2px 0; }		\
QSlider::handle:horizontal { background: #8DA6CE; border: 3px solid #5D8ED9; width: 13px; margin: -2px 0; border-radius: 3px; }		\
		\
/*------------	QTabWidget	--------------*/		\
QTabWidget::pane { border: 1px solid #5D8ED9; left: 5px; border-radius:2px; }		\
QTabWidget::tab-bar { left: 8px; bottom:-1px; } 		\
		\
/*------------	QTabBar	-----------------*/		\
QTabBar::tab { border: 1px solid #BFD3F3; border-top-left-radius: 4px; border-top-right-radius: 8px; border-bottom-color:#5D8ED9;		\
			   min-width: 80px; min-height: 20px;	padding: 2px; 		\
			   background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:0.0113636, y2:0.517, stop:0 #F0F5FA, stop:0.920455 #E0E8F0);}		\
QTabBar::tab:selected, QTabBar::tab:hover {	background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:0, y2:0.5, stop:0 #99C4EE, stop:1 #CAD4DE); } 		\
QTabBar::tab:selected { border: 1px solid #5D8ED9; border-bottom-color: #E0E8F0; }		\
QTabBar::tab:!selected { border-bottom-color: #5D8ED9; }		\
		\
/*------------	QTableView	-------------*/		\
QTableView { background-color: white; background-attachment: scroll; border:1px solid #5D8ED9;	selection-color:#1A21B0;		\
    selection-background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:0.0113636, y2:0.517, stop:0 #CBE3FB, stop:0.920455 #E0E8F0);	}		\
		\
/*------------	QTextEdit	-------------*/		\
QTextEdit			{ background-color: #F7FAFC; border: 1px solid #5D8ED9;	border-radius: 2px; }		\
QTextEdit:disabled	{ background-color: #E7E8E8; border: 1px solid #8DA6CE;	border-radius: 2px;}		\
		\
/*------------	QToolButton	-------------*/		\
QToolButton:checked	{ border:1px solid #5D8ED9;	border-radius:3px; padding:-1px; }		\
QToolButton:hover	{ border:1px solid #8F8F90;	border-radius:3px;  }		\
		\
/*------------	QTreeView	-------------*/		\
QTreeView {	background-color: #F7FAFC;	border: 1px solid #5D8ED9;	border-radius:2px;	color:#000066;}		\
QTreeView::item{ selection-color:#E30035;selection-background-color: #E0E8F0;min-height:20px;border:1px solid #F0F5FA;border-radius:3px; }		\
QTreeView::item:selected{ background: qlineargradient(spread:reflect, x1:0, y1:0, x2:0.0113636, y2:0.517, stop:0 #CBE3FB, stop:0.920455 #E0E8F0);}		\
QTreeView::item:hover { background: qlineargradient(spread:reflect, x1:0, y1:0, x2:0.0113636, y2:0.517, stop:0 #CBE3FB, stop:0.920455 #E0E8F0); }		\
		\
/*------------	QDockWidget	-----------------*/		\
QDockWidget QToolButton::menu-indicator { image:url(:/images/images/images/toolbar/menu_indicator.png); subcontrol-origin:padding; subcontrol-position: bottom right; bottom:3px; }		\
QDockWidget QToolButton::menu-indicator:pressed, QToolButton::menu-indicator:open { position: relative; top: 2px; left: 2px; }		\
		\
/*------------	Other	-----------------*/		\
		\
QWidget QTabWidget#tabBar::pane { border:0px; }		\
QWidget QPushButton#btnPageFirst,QPushButton#btnPagePrev,QPushButton#btnPageNext,QPushButton#btnPageLast { backgorund : transparent; border:0px; }		\
 		\
QDockWidget#toolbox{ position: relative; top: 2px; left: 2px; }		\
QGroupBox#grpCondition	{border:0px;}		\
		\
.materialidentify QPushButton {border:0px;}		\
.materialidentify QPushButton::menu-indicator { image:url(""); subcontrol-origin:padding; subcontrol-position: bottom right; bottom:3px; }		\
.materialidentify QPushButton::menu-indicator:pressed, QPushButton::menu-indicator:open { position: relative; top: 2px; left: 2px; }		\
		\
.SpatialQueryDlg QPushButton {border:0px;}		\
.peoplesearch QPushButton {border:0px;}		\
.ShortestPathWidget QPushButton {border:0px;}		\
.VectorSearchGeneralWidget QPushButton {border:0px;}		\
.ShortestPathSettingDlg QPushButton {border:1px solid #5D8ED9;}	"

#endif // MARIN_STYLE_H
