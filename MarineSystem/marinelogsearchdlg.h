#ifndef MARINELOGSEARCHWIDGET_H
#define MARINELOGSEARCHWIDGET_H

#include <QDialog>
#include "ui_marinelogsearchdlg.h"

class MarineLogSearchInputWidet : public QDialog
{
	Q_OBJECT

public:
	MarineLogSearchInputWidet(QWidget *parent = 0);
	~MarineLogSearchInputWidet();

private slots:
	void on_mBtnUnreceivedSearch_clicked();
	void on_mBtnReceivedSearch_clicked();

private:
	Ui::MarineLogSearchWidget ui;


	QTreeWidgetItem					 *mRootItem;      
};

#endif // MARINELOGSEARCHWIDGET_H
