#include "marinemultimediaviewer.h"

MarineMultimediaViewer::MarineMultimediaViewer(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	ui.videoPlayer->load(QCoreApplication::applicationDirPath() + "\\media.avi");
	ui.videoPlayer->play();
	connect( ui.videoPlayer, SIGNAL(finished()), ui.videoPlayer, SLOT(play()));
}

MarineMultimediaViewer::~MarineMultimediaViewer()
{

}
