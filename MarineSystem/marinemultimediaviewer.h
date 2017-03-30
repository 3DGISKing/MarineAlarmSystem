#ifndef MARINEMULTIMEDIAVIEWER_H
#define MARINEMULTIMEDIAVIEWER_H

#include <QWidget>
#include "ui_marinemultimediaviewer.h"

class MarineMultimediaViewer : public QWidget
{
	Q_OBJECT

public:
	MarineMultimediaViewer(QWidget *parent = 0);
	~MarineMultimediaViewer();

private:
	Ui::MarineMultimediaViewer ui;
};

#endif // MARINEMULTIMEDIAVIEWER_H
