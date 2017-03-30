#include "marinelogsearchdlg.h"

#include <QMessageBox>

#include "qgisimport.h"
#include "qgsfeature.h"

#include "marinesystemlogic.h"
#include "marinelogmanager.h"
#include "marinelogsearchresultdlg.h"

MarineLogSearchInputWidet::MarineLogSearchInputWidet(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	ui.treeWidget->setHeaderHidden(true);
	ui.treeWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);

	mRootItem=new QTreeWidgetItem(ui.treeWidget);	

	mRootItem->setText(0, tr("All Ship"));
	mRootItem->setData(0, Qt::UserRole,(long)NULL);
	mRootItem->setCheckState(0, Qt::Checked);

	QgsFeatureList allship = MarineSystemLogic::instance()->allShip();

	foreach ( QgsFeature feature, allship )
	{
		QTreeWidgetItem* item=new QTreeWidgetItem(mRootItem);

		item->setText(0, feature.attribute("name").toString()); 
		//item->setToolTip(0, );
		item->setCheckState(0,Qt::Checked);
		item->setIcon(0, QIcon(":/images/images/themes/default/boat.svg"));
		item->setData(0, Qt::UserRole, feature.attribute("shipid").toString());
	}

	mRootItem->setExpanded(true);

	ui.dateTimeEditTo->setDateTime(QDateTime::currentDateTime());
	
	QDate date = QDate::currentDate();

	int days = date.toJulianDay();

	days = days - 1;

	date = QDate::fromJulianDay(days);

	QDateTime dt ;

	dt.setDate(date);
	dt.setTime(QTime::currentTime());

	ui.dateTimeEditFrom->setDateTime(dt);
}

MarineLogSearchInputWidet::~MarineLogSearchInputWidet()
{

}

void MarineLogSearchInputWidet::on_mBtnUnreceivedSearch_clicked()
{
	QDateTime from = ui.dateTimeEditFrom->dateTime();
	QDateTime to   = ui.dateTimeEditTo->dateTime();

	QStringList shipnames = MarineLogManager::instance()->unreceivedShipNameList(from, to);

	if(shipnames.size() == 0 )
	{
		QMessageBox::information(this, tr("MarineSystem"), QString::fromLocal8Bit("·º´Ç ¹É°¡ ³Þ ºØ»¦Â×Êî»¡³£³Þ!"));
		return;
	}

	QString info = QString::fromLocal8Bit("ÂÙ¸Ü´ª ºØ»¦Â×¼è Ê±Ë¼ ¹É´ÉË¼ ³ÞËÁ±á °¯»¡³£³Þ\n");


	info = info + shipnames.join(",");

	QMessageBox::information(this, tr("MarineSystem"), info);
}

void MarineLogSearchInputWidet::on_mBtnReceivedSearch_clicked()
{
	int childcount=mRootItem->childCount();

	QStringList shipids;
	
	for(int i=0;i<childcount;i++)
	{
		QTreeWidgetItem* item=mRootItem->child(i);
		
		QString shipid = item->data(0, Qt::UserRole).toString();

		shipids<<shipid;
	}

	QDateTime from = ui.dateTimeEditFrom->dateTime();
	QDateTime to   = ui.dateTimeEditTo->dateTime();

	QStandardItemModel *model = MarineLogManager::instance()->receivedShipList(from, to, shipids);

	if(model == NULL)
	{
		QMessageBox::information(this, tr("MarineSystem"), QString::fromLocal8Bit("ºØ»¦ÂÙ ¹É´ÉËË ÊÖ»¡³£³Þ!"));
		return;
	}

	MarineLogSearchResultDlg* dlg = new MarineLogSearchResultDlg(this);

	dlg->setModel(model);

	dlg->show();
}