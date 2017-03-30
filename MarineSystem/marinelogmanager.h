#ifndef MARINELOGMANAGER_H
#define MARINELOGMANAGER_H

#include <QObject>
#include <QStringList>
#include <QSqlDatabase>

#include "marineconnection.h"

class QStandardItemModel;

class MarineLogManager : public QObject
{
	Q_OBJECT

public:
	~MarineLogManager();

	static MarineLogManager* instance();
	static void              release();

	bool                     addLog(MarineGPSInformation info); 

	bool                     deleteAll();
	
	QStandardItemModel*      receivedShipList(QDateTime from, QDateTime to, QStringList shipids);
	QStringList              unreceivedShipNameList(QDateTime from, QDateTime to);
private:	
	MarineLogManager(QObject *parent);

	static MarineLogManager* mInstance;

	QSqlDatabase mDatabase;
};

#endif // MARINELOGMANAGER_H
