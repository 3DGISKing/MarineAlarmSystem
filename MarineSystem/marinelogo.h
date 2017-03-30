#ifndef _LOGODISP_H
#define _LOGODISP_H

#include <QTimer>

#include "qgisimport.h"
#include "qgspoint.h"

class QGraphicsPixmapItem;
class QgsMapCanvas;

class MarineLogo : public QObject
{
	Q_OBJECT

public:
	MarineLogo(QgsMapCanvas *canvas);
	~MarineLogo();

	void startAnimation();
	void stopAnimation();
	void hide();
	void show();

	void setMapCoordinate(double x, double y)
	{
		mMapX = x;
		mMapY = y;
	}

public slots:
	void updatePositon();

private slots:
	void timerTimeout();

private:
	QTimer                mTimer;
	QgsMapCanvas          *mMapCanvas;
	QGraphicsPixmapItem   *mPixmapItem;
	QgsPoint              mPostion;
	qreal                 mScale;
	double                mMapX, mMapY;
	int                   mPngIndex;

};
#endif