#ifndef MARINEOPTIONDLG_H
#define MARINEOPTIONDLG_H

#include <QDialog>
#include "ui_marineoptiondlg.h"

class MarineOptionDlg : public QDialog
{
	Q_OBJECT

public:
	MarineOptionDlg(QWidget *parent = 0);
	~MarineOptionDlg();

protected:
	virtual void accept();
	virtual void reject();

private slots:
	void on_mConnectButton_clicked();
	void on_mBtnRefreshDevices_clicked();
	void on_mBtnLicence_clicked();
	void on_mBtnDeleteAllLog_clicked();
	void on_mChkAutoMoveShip_stateChanged();
	void on_mChkLogoForever_stateChanged();
	void on_mSpbLogoDelaySec_valueChanged(int);
	void apply();
private:
	void connectGps();
	void populateDevices();
	void popualteBaudRateTypes();

private:
	Ui::MarineOptionDlg ui;

	bool mAutoMoveToShip;
	bool mLogoForever;
	int  mLogoDelaySecs;
};

#endif // MARINEOPTIONDLG_H
