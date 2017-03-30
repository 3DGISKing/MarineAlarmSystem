#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>
#include <QPixmap>

#include "marinelogo.h"

#include "qgsmapcanvas.h"
#include "qgsfeature.h"
#include "qgsgeometry.h"

#define LOGOIMAGECOUNT 15
#define LOGOPNGSIZE_X   300
#define LOGOPNGSIZE_Y   300

MarineLogo::MarineLogo(QgsMapCanvas *canvas)
	:mMapCanvas(canvas),
	mScale(0.5),
	mMapX(0.0),
	mMapY(0.0),
	mPngIndex(0)
{
	connect(&mTimer,SIGNAL(timeout()),this,SLOT(timerTimeout()));
	connect(mMapCanvas, SIGNAL(extentsChanged()), this, SLOT(updatePositon()));

	mPixmapItem=new QGraphicsPixmapItem;
	mMapCanvas->scene()->addItem(mPixmapItem);

	mPixmapItem->setScale(mScale);
}

MarineLogo::~MarineLogo()
{
	mMapCanvas->scene()->removeItem(mPixmapItem);
	delete mPixmapItem;
}

void MarineLogo::startAnimation()
{
	mTimer.start(100);
}

void MarineLogo::updatePositon()
{
	QgsPoint pos(mMapX, mMapY);

	const QgsMapToPixel *mapToPixel = mMapCanvas->getCoordinateTransform();

	mPostion=mapToPixel->transform(pos);
}

void MarineLogo::stopAnimation()
{
	mTimer.stop();
}

void MarineLogo::timerTimeout()
{
	QString fileName;

	if (mPngIndex < 10)
	{
		fileName=QString(":/images/images/logo/alarmMark-000%1.png").arg(mPngIndex);
	}
	else
		fileName=QString(":/images/images/logo/alarmMark-00%1.png").arg(mPngIndex);

	mPngIndex++;

	if(mPngIndex > LOGOIMAGECOUNT-1)
		mPngIndex = 0;

	QPixmap pix(fileName);

	mPixmapItem->setPixmap(pix);

	mPixmapItem->setPos( mPostion.x() - LOGOPNGSIZE_X / 2 * mScale, mPostion.y() - LOGOPNGSIZE_Y / 2 *mScale);
}

void MarineLogo::hide()
{
	mPixmapItem->hide();
}

void MarineLogo::show()
{
	mPixmapItem->show();
}