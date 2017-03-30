#ifndef MARINELOGSEARCHRESULTDLG_H
#define MARINELOGSEARCHRESULTDLG_H

#include <QDialog>

#include "ui_marinelogsearchresultdlg.h"

class QStandardItemModel;

class MarineLogSearchResultDlg : public QDialog
{
	Q_OBJECT

public:
	MarineLogSearchResultDlg(QWidget *parent = 0);
	~MarineLogSearchResultDlg();

	void setModel(QStandardItemModel* model);

private slots:
	void tableViewDoubleClicked(QModelIndex idx);

private:
	Ui::MarineLogSearchResultDlg ui;

	QStandardItemModel* mModel;
};

#endif // MARINELOGSEARCHRESULTDLG_H
