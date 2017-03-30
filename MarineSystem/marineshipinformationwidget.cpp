#include "marineshipinformationwidget.h"
#include "marinesystemlogic.h"

#include "qgisimport.h"
#include "qgsvectorlayer.h"
#include "qgsvectordataprovider.h"
#include "qgsgeometry.h"

MarineShipInformationWidget::MarineShipInformationWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	ui.tableWidgetShipList->setEditTriggers(QTableWidget::NoEditTriggers);
	ui.tableWidgetShipList->verticalHeader()->setHidden(true);
	ui.tableWidgetShipList->horizontalHeader()->setStretchLastSection(true);
	ui.tableWidgetShipList->setSelectionBehavior(QAbstractItemView::SelectRows);

	ui.tableWidgetShipDetail->setEditTriggers(QTableWidget::NoEditTriggers);
	ui.tableWidgetShipDetail->horizontalHeader()->setHidden(true);
	ui.tableWidgetShipDetail->verticalHeader()->setHidden(true);
	ui.tableWidgetShipDetail->horizontalHeader()->setStretchLastSection(true);

	popualteShipList();

	displayShipInformation(1);

	mLastDisplayedShipId = 1 ;

	connect(ui.tableWidgetShipList, SIGNAL(cellDoubleClicked(int,int)), this, SLOT(shipListTableClicked(int,int)));
}

MarineShipInformationWidget::~MarineShipInformationWidget()
{

}

void MarineShipInformationWidget::popualteShipList()
{
	QStringList displayfieldnamelist;

	displayfieldnamelist<<"shipid"<<"seaarea"<<"name";

	//Only the field -"shipid","seaarea","name" are displayed.
	//and longitude and latitude

	ui.tableWidgetShipList->setColumnCount( displayfieldnamelist.size() + 2 );

	QgsVectorLayer *shiplayer=(QgsVectorLayer*) MarineSystemLogic::instance()->shipLayer();

	ui.tableWidgetShipList->setRowCount(shiplayer->featureCount());
	
	QStringList translatedfieldnamelist;

	translatedfieldnamelist<<tr("shipid")<<tr("seaarea")<<tr("name")<<tr("longitude")<<tr("latitude");
	
	ui.tableWidgetShipList->setHorizontalHeaderLabels(translatedfieldnamelist);

	QgsVectorDataProvider *dataProvider=shiplayer->dataProvider();

	QgsFields fields = dataProvider->fields();

	QgsFeatureIterator iter=shiplayer->getFeatures();
	QgsFeature feature;

	int row = 0;

	while(iter.nextFeature(feature))
	{
		int colunm=0;

		for (int i = 0 ; i < fields.count(); i++)
		{
			QgsField field=fields.at(i);

			if (displayfieldnamelist.indexOf(field.name()) != -1) 
			{
				QTableWidgetItem *item=new QTableWidgetItem;

				item->setText(feature.attribute(i).toString());
				item->setData(Qt::UserRole, feature.id());

				ui.tableWidgetShipList->setItem(row, colunm, item);

				colunm++;
			}
		}
		
		QgsPoint p;
			
		if(feature.geometry() == NULL)
			continue;
		
		p = feature.geometry()->asMultiPoint().at(0);

		QTableWidgetItem *item=new QTableWidgetItem;

		item->setText(QString::number(p.x()));
		item->setData(Qt::UserRole, feature.id());

		ui.tableWidgetShipList->setItem(row, colunm, item);

		colunm++;

		item=new QTableWidgetItem;

		item->setText(QString::number(p.y()));
		item->setData(Qt::UserRole, feature.id());

		ui.tableWidgetShipList->setItem(row, colunm, item);

		row++;
	}

	ui.tableWidgetShipList->resizeColumnsToContents();
}

void MarineShipInformationWidget::displayShipInformation(QgsFeatureId fid)
{
	QgsVectorLayer *shiplayer=(QgsVectorLayer*) MarineSystemLogic::instance()->shipLayer();

	QgsVectorDataProvider *dataProvider=shiplayer->dataProvider();

	QgsFields fields = dataProvider->fields();

	ui.tableWidgetShipDetail->setRowCount( fields.count() );
	ui.tableWidgetShipDetail->setColumnCount( 2 );

	QgsFeatureRequest request;

	request.setFilterFid(fid);

	QgsFeatureIterator iter = dataProvider->getFeatures(request);

	QgsFeature f;
	QString translatedfieldname;

	if( iter.nextFeature(f) )
	{
		for (int i = 0 ; i < fields.count(); i++)
		{
			QgsField field = fields[i];

			QTableWidgetItem *fieldnameitem=new QTableWidgetItem;
			
			translatedfieldname = QCoreApplication::translate(NULL, field.name().toUtf8().constData(), 0, QCoreApplication::UnicodeUTF8);

			fieldnameitem->setText(translatedfieldname);

			QTableWidgetItem *fieldvalueitem=new QTableWidgetItem;
			fieldvalueitem->setText(f.attribute(field.name()).toString());

			ui.tableWidgetShipDetail->setItem(i, 0, fieldnameitem);
			ui.tableWidgetShipDetail->setItem(i, 1, fieldvalueitem);
		}
	}
	else
	{
		qWarning("can not find feature: fid = %d in ship layer", fid );
	}
	
	ui.tableWidgetShipDetail->resizeColumnsToContents();
}


void MarineShipInformationWidget::shipListTableClicked(int row, int col)
{
	QTableWidgetItem* item = ui.tableWidgetShipList->item(row, col);

	QgsFeatureId fid = item->data(Qt::UserRole).toInt();

	displayShipInformation(fid);

	MarineSystemLogic::instance()->moveToShip(fid);
}

void MarineShipInformationWidget::updateShip(QString shipid)
{
	QgsVectorLayer *shiplayer=(QgsVectorLayer*) MarineSystemLogic::instance()->shipLayer();

	QgsVectorDataProvider *dataProvider=shiplayer->dataProvider();

	QgsFields fields = dataProvider->fields();

	QgsFeatureIterator iter=shiplayer->getFeatures();
	QgsFeature feature;

	int row = 0;

	while(iter.nextFeature(feature))
	{
		if(feature.attribute("shipid") != shipid)
		{
			row++;
			continue;
		}	
		
		if(feature.geometry() == NULL)
			continue;

		QgsPoint p;

		p = feature.geometry()->asMultiPoint().at(0);

		QTableWidgetItem *item = ui.tableWidgetShipList->item(row, 3);

		if (item == NULL)
			continue;
		
		item->setText(QString::number(p.x()));

		ui.tableWidgetShipList->setCurrentItem(item);

		item = ui.tableWidgetShipList->item(row, 4);

		if (item == NULL)
			continue;

		item->setText(QString::number(p.y()));

		break;
	}


	ui.tableWidgetShipList->resizeColumnsToContents();
}

