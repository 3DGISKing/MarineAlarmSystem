#include "marinelogsearchresultdlg.h"

#include <QStandardItemModel>

#include "marinesystemlogic.h"

MarineLogSearchResultDlg::MarineLogSearchResultDlg(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	ui.tableView->horizontalHeader()->setStretchLastSection(true);
	ui.tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
	
	mModel = NULL;

	connect(ui.tableView, SIGNAL(doubleClicked(QModelIndex)), this, SLOT(tableViewDoubleClicked(QModelIndex )));
}

MarineLogSearchResultDlg::~MarineLogSearchResultDlg()
{

}

void MarineLogSearchResultDlg::setModel(QStandardItemModel* model)
{
	mModel = model ;
	ui.tableView->setModel(model);

	ui.tableView->resizeColumnsToContents();
}

void MarineLogSearchResultDlg::tableViewDoubleClicked(QModelIndex idx)
{
	double longitude = mModel->data(idx.sibling(idx.row(), 2), Qt::EditRole).toDouble();
	double latitude =  mModel->data(idx.sibling(idx.row(), 3), Qt::EditRole).toDouble();

	MarineSystemLogic::instance()->moveTo(longitude, latitude);
}