#include "marinesystemlogic.h"

#include "qgisimport.h"
#include "qgsvectorlayer.h"
#include "qgsmaplayerregistry.h"
#include "qgsmapcanvas.h"
#include "mainwindow.h"
#include "qgsgeometry.h"

#include "marineconnection.h"
#include "marinesystem.h"
#include "config.h"
#include "marinelogmanager.h"
#include "marinelogo.h"
#include "marineshipinformationwidget.h"
#include "qgsvectordataprovider.h"

MarineSystemLogic* MarineSystemLogic::mInstance = NULL;

MarineSystemLogic* MarineSystemLogic::instance()
{
	if(mInstance==NULL)
	{
		mInstance=new MarineSystemLogic(NULL);
	}

	return mInstance;
}

void MarineSystemLogic::release()
{
	delete mInstance;
	mInstance = NULL;
}

MarineSystemLogic::MarineSystemLogic(QObject *parent)
	: QObject(parent)
{
	QList<QgsMapLayer *> layerlist = QgsMapLayerRegistry::instance()->mapLayersByName(QString::fromLocal8Bit("¹É") );

	if(layerlist.size() == 1)
	{
		mShipLayer = (QgsVectorLayer*) layerlist.at(0);
	}
	else
	{

	}

	mMarineConnection = NULL;

	mMarineLogo = new MarineLogo(g_app->GetMainWindow()->mapCanvas());
	mMarineLogo->hide();

	mLastUpdateShipId = -1;
}

MarineSystemLogic::~MarineSystemLogic()
{
	delete mMarineConnection;
	delete mMarineLogo;
}

void MarineSystemLogic::notifyMarineGPSInfomation(const MarineGPSInformation & info)
{	
	MarineLogManager::instance()->addLog(info);

	mMarineLogo->setMapCoordinate(info.longitude, info.latitude);
	mMarineLogo->updatePositon();

	mMarineLogo->show();
	mMarineLogo->startAnimation();
	
	if(g_app->GetConfig()->m_logoForever == false)
	{
		QTimer::singleShot(g_app->GetConfig()->m_logoDelaySecs * 1000, this, SLOT(stopLogo()));
	}

	updateShipLayer(info);

	g_app->GetMainWindow()->marineShipInformationWidget()->updateShip(info.shipid);
	g_app->GetMainWindow()->marineShipInformationWidget()->displayShipInformation(mLastUpdateShipId);

	if(mLastUpdateShipId != -1 && g_app->GetConfig()->m_autoMoveShip)
		moveToShip(mLastUpdateShipId);
}

void MarineSystemLogic::attempConnect()
{
	if(mMarineConnection)
	{
		delete mMarineConnection;
	}

	mMarineConnection = new MarineConnection( );

    if(g_app->GetConfig()->m_DeviceSimul == false)
		mMarineConnection->connect();

	if(g_app->licenced())
		connect( mMarineConnection, SIGNAL( stateChanged( const MarineGPSInformation & ) ), this, SLOT( notifyMarineGPSInfomation( const MarineGPSInformation & ) ) );
}

void MarineSystemLogic::updateShip(int id, MarineGPSInformation info)
{
	if(mShipLayer == NULL)
		return;

	bool startediting = mShipLayer->startEditing();

	if(startediting == false)
		return;
	
	bool movesuccssed = mShipLayer->moveVertex(info.longitude, info.latitude,(QgsFeatureId)id, 0);

	QString time = info.utcDateTime.toString("yyyy.MM.dd hh:mm:ss");

	int fieldindex = mShipLayer->dataProvider()->fields().indexFromName("time");

	mShipLayer->changeAttributeValue(id, fieldindex, time);

	fieldindex = mShipLayer->dataProvider()->fields().indexFromName("lasttime");

	mShipLayer->changeAttributeValue(id, fieldindex, time);
	
	bool commit = mShipLayer->commitChanges();

	if(commit == false)
	{

	}
}

void MarineSystemLogic::updateShipLayer(MarineGPSInformation info)
{
	QgsFeatureId fid = -1 ;

	if(mShipIDFeatureIDCache.contains(info.shipid))
	{
		fid = mShipIDFeatureIDCache.value(info.shipid);
	}
	else
	{
		QString strexpression = "shipid LIKE '%" + info.shipid + "%'";

		QgsExpression* expression = new QgsExpression( strexpression );

		expression->prepare( mShipLayer->pendingFields() );

		QgsFeatureRequest request;
		request.setFlags( QgsFeatureRequest::NoGeometry );

		QgsFeatureIterator features = mShipLayer->getFeatures(request);

		QgsFields fields = mShipLayer->pendingFields();

		QgsFeature feature;
		QgsFeatureIds findedfeatureids;

		while ( features.nextFeature( feature ) )
		{
			if ( expression->evaluate( &feature, fields ).toBool() )
			{
				fid = feature.id();
				break;
			}
		}

		features.close();

		delete expression;

		mShipIDFeatureIDCache.insert(info.shipid, fid);
	}

	if(fid != -1)
	{
		updateShip(fid, info);
	}

	mLastUpdateShipId = fid;
}

void MarineSystemLogic::moveToShip(QgsFeatureId fid)
{
	QgsFeature feature;

	QgsFeatureRequest req;
	req.setFilterFid(fid);

	QgsFeatureIterator iter=mShipLayer->getFeatures(req);

	if(iter.nextFeature(feature))
	{
		QgsMapCanvas* mapcanvas = g_app->GetMainWindow()->mapCanvas();

		QgsRectangle rect = mapcanvas->mapSettings().layerExtentToOutputExtent( mShipLayer, feature.geometry()->boundingBox() );

		QgsPoint c = rect.center();
		rect = mapcanvas->extent();
		rect.scale( 1, &c );

		mapcanvas->setExtent( rect );
		mapcanvas->refresh();
	}
	else
	{
		
	}
}

void MarineSystemLogic::moveTo(double longitude, double lattude)
{
	QgsMapCanvas* mapcanvas = g_app->GetMainWindow()->mapCanvas();

	QgsPoint c(longitude, lattude);
	QgsRectangle rect = mapcanvas->extent();
	rect.scale( 1, &c );

	mapcanvas->setExtent( rect );
	mapcanvas->refresh();
}

void MarineSystemLogic::zoomToShipLayer()
{
	mShipLayer->updateExtents();

	QgsMapCanvas* canvas = g_app->GetMainWindow()->mapCanvas();

	QgsRectangle layerextent = mShipLayer->extent();

	if(layerextent.isNull())
		return;

	//if ( canvas->hasCrsTransformEnabled() )
		layerextent = canvas->mapSettings().layerExtentToOutputExtent( mShipLayer, layerextent );
	
	canvas->setExtent(layerextent);
	canvas->refresh();
}

QgsFeatureList MarineSystemLogic::allShip()
{
	  QgsFeatureList features;

	  QgsFeatureRequest req;

	  QgsFeatureIterator it = mShipLayer->getFeatures(req);

	  QgsFeature f;

	  while ( it.nextFeature( f ) )
	  {
		  features.push_back( f );
	  }

	  return features;
}

QStringList MarineSystemLogic::allShipIds()
{
	QStringList shipids;

	QgsFeatureRequest req;

	QgsFeatureIterator it = mShipLayer->getFeatures(req);

	QgsFeature f;

	while ( it.nextFeature( f ) )
	{
		shipids<<f.attribute("shipid").toString();
	}

	return shipids;
}

void MarineSystemLogic::stopLogo()
{
	mMarineLogo->stopAnimation();
	mMarineLogo->hide();
}