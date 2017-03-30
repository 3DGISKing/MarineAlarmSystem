#ifndef MARINESENDRECEIVEWIDGET_H
#define MARINESENDRECEIVEWIDGET_H

#include <QWidget>
#include "ui_marinesendreceivewidget.h"

class MarineSendReceiveWidget : public QWidget
{
	Q_OBJECT

public:
	MarineSendReceiveWidget(QWidget *parent = 0);
	~MarineSendReceiveWidget();

private slots:
	void on_mBtnSend_clicked();
	void on_mBtnReceive_clicked();
private:
	Ui::MarineSendReceiveWidget ui;
};

#endif // MARINESENDRECEIVEWIDGET_H
