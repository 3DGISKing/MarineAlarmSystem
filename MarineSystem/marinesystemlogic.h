#ifndef MARINESYSTEMLOGIC_H
#define MARINESYSTEMLOGIC_H

#include <QObject>
#include <QHash>

#include "marineconnection.h"

#include "qgisimport.h"
#include "qgsfeature.h"

class QgsVectorLayer;
class MarineConnection;
class MarineLogo;

class MarineSystemLogic : public QObject
{
	Q_OBJECT

public:
	MarineSystemLogic(QObject *parent);
	~MarineSystemLogic();

	static MarineSystemLogic* instance();
	static void release();

	void attempConnect();

	QgsVectorLayer* shipLayer() {return mShipLayer ;}; 
	
	void updateShipLayer(MarineGPSInformation info);
	MarineConnection* marineConnection() {return mMarineConnection ; }

	void moveToShip(QgsFeatureId fid);
	void zoomToShipLayer();
	void moveTo(double longitude, double latitude);
	QgsFeatureList allShip();

	QStringList    allShipIds();

private slots:
	void notifyMarineGPSInfomation(const MarineGPSInformation &);
	void stopLogo();

private:
	void updateShip(int id, MarineGPSInformation info);

private:
	static MarineSystemLogic* mInstance;

	QgsVectorLayer*           mShipLayer;
	MarineConnection*         mMarineConnection;
	MarineLogo*               mMarineLogo; 

	QHash<QString , QgsFeatureId> mShipIDFeatureIDCache;
	QgsFeatureId              mLastUpdateShipId;
};

#endif // MARINESYSTEMLOGIC_H
