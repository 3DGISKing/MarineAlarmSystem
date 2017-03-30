#include "marinelogmanager.h"

#include <QCoreApplication>
#include <QStandardItemModel>

#include <QSqlRecord>
#include <QSqlQuery>
#include <QSqlError>

#include "marinesystemlogic.h"

MarineLogManager* MarineLogManager::mInstance = NULL;

#define LOG_TBL_NAME "tbl_gps_log"

MarineLogManager* MarineLogManager::instance()
{
	if(mInstance == NULL)
	{
		mInstance = new MarineLogManager(NULL);
	}

	return mInstance;
}

void MarineLogManager::release()
{
	if(mInstance)
	{
		delete mInstance;
		mInstance = NULL;
	}
}

MarineLogManager::MarineLogManager(QObject *parent)
	: QObject(parent)
{
	mDatabase = QSqlDatabase::addDatabase("QSQLITE");

	mDatabase.setDatabaseName(QCoreApplication::applicationDirPath() + "/log.dll");

	if(mDatabase.open())
	{

	}
	else
	{
		qWarning("Failed to open database");
	}
}

MarineLogManager::~MarineLogManager()
{

}

bool MarineLogManager::addLog(MarineGPSInformation info)
{
	QString sql;

	sql = "INSERT INTO %1 (shipid, datetime, longitude, latitude) VALUES ('%2', %3, %4, %5)";
	
	sql = sql.arg(LOG_TBL_NAME).arg(info.shipid).arg(info.utcDateTime.toTime_t()).arg(info.longitude).arg(info.latitude);

	QSqlQuery qry(mDatabase);

	if(!qry.exec(sql))
	{
		qWarning(qry.lastError().text().toAscii().data());
		return false;
	}
	else
		return true;
}

bool MarineLogManager::deleteAll()
{
	QString sql;
	
	sql = "DELETE FROM tbl_gps_log";

	QSqlQuery qry(mDatabase);

	if(!qry.exec(sql))
	{
		qWarning(qry.lastError().text().toAscii().data());
		return false;
	}
	else
		return true;
}

QStringList MarineLogManager::unreceivedShipNameList(QDateTime from, QDateTime to)
{
	int ifrom = from.toTime_t();
	int ito    = to.toTime_t();

	QStringList namelist;
	
	QStringList allshipids = MarineSystemLogic::instance()->allShipIds();

	foreach(QString shipid, allshipids)
	{
		QString sql = "SELECT COUNT(*) FROM %1 WHERE datetime > %2 AND datetime < %3 AND shipid = '%4'";

		sql = sql.arg(LOG_TBL_NAME).arg(ifrom).arg(ito).arg(shipid);

		QSqlQuery qry(mDatabase);

		if(!qry.exec(sql))
		{
			qWarning(qry.lastError().text().toLocal8Bit());
			continue;
		}

		if(qry.next())
		{
			if(qry.value(0).toInt() == 0)
				namelist<<shipid;
		}
		else
			continue;
	}

	return namelist;
}

QStandardItemModel* MarineLogManager::receivedShipList(QDateTime from, QDateTime to, QStringList shipids)
{
	QSqlQuery qry(mDatabase);

	QString sql;

	int ifrom = from.toTime_t();
	int ito = to.toTime_t();

	QString shipidswhereclause;

	QStringList tmp;

	foreach(QString shipid, shipids)
	{
		QString s = "shipid = '%1'";

		s = s.arg(shipid);

		tmp<<s;
	}
									   
	shipidswhereclause = tmp.join(" OR ");

	sql = "SELECT shipid, datetime, longitude, latitude FROM %1 WHERE datetime > %2 AND datetime < %3 AND (%4)";

	sql = sql.arg(LOG_TBL_NAME).arg(ifrom).arg(ito).arg(shipidswhereclause);
	sql = sql +" ORDER BY shipid";  

	if(!qry.exec(sql))
	{
		qWarning(qry.lastError().text().toLocal8Bit());
		return NULL;
	}

	if(qry.size() == 0)
		return NULL;

	QStandardItemModel *model = new QStandardItemModel();

	while(qry.next())
	{
		QList<QStandardItem *> items;
		QStandardItem *item;
		QVariant val;

		for(int i = 0; i < qry.record().count(); i++)
		{
			val = qry.record().value(i);

			if(qry.record().fieldName(i) == "datetime")
			{
				int idatetime = val.toInt();

				QDateTime dt = QDateTime::fromTime_t(idatetime);

				item = new QStandardItem( dt.toString("yyyy.MM.dd hh:mm:ss"));
			}
			else if(qry.record().fieldName(i) == "id")
			{
				continue;
			}
			else
			{
				item = new QStandardItem(val.toString());
			}

			items << item;
		}

		model->appendRow(items);
	}

	model->setHeaderData(0, Qt::Horizontal, tr("shipid"), Qt::DisplayRole);
	model->setHeaderData(1, Qt::Horizontal, tr("receive time"), Qt::DisplayRole);
	model->setHeaderData(2, Qt::Horizontal, tr("longitude"), Qt::DisplayRole);
	model->setHeaderData(3, Qt::Horizontal, tr("latitude"), Qt::DisplayRole);

	return model;
}