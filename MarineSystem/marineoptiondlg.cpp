#include "marineoptiondlg.h"

#include <QSettings>
#include <QMessageBox>

#include "config.h"
#include "marinesystem.h"
#include "marinesystemlogic.h"
#include "licencedlg.h"
#include "marinelogmanager.h"

MarineOptionDlg::MarineOptionDlg(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);	

	populateDevices();
	popualteBaudRateTypes();

	if(g_app->licenced())
		ui.mBtnLicence->setEnabled(false);

	if(g_app->GetConfig()->m_autoMoveShip)
	{
		ui.mChkAutoMoveShip->setCheckState(Qt::Checked);
		mAutoMoveToShip = true;
	}
	else
	{
		ui.mChkAutoMoveShip->setCheckState(Qt::Unchecked);
		mAutoMoveToShip = false;
	}
	
	mLogoForever = g_app->GetConfig()->m_logoForever;
	mLogoDelaySecs = g_app->GetConfig()->m_logoDelaySecs;

	ui.mSpbLogoDelaySec->setValue(mLogoDelaySecs);

	if(mLogoForever)
	{
		ui.mChkLogoForever->setCheckState(Qt::Checked);
		ui.mSpbLogoDelaySec->setEnabled(false);
	}
	else
	{
		ui.mChkLogoForever->setCheckState(Qt::Unchecked);
		ui.mSpbLogoDelaySec->setEnabled(true);
	}

	connect(ui.mBtnOK, SIGNAL(clicked()), this, SLOT(accept()));
	connect(ui.mBtnCancel, SIGNAL(clicked()), this, SLOT(reject()));
}

MarineOptionDlg::~MarineOptionDlg()
{

}

void MarineOptionDlg::populateDevices()
{
	QList< QPair<QString, QString> > ports = MarineConnection::availablePorts();

	ui.mCboDevices->clear();

	// add devices to combobox, but skip gpsd which is first.
	for ( int i = 0; i < ports.size(); i++ )
	{
		ui.mCboDevices->addItem( ports[i].second, ports[i].first );
	}

	// remember the last ports used
	QString lastPort = g_app->GetConfig()->m_COMPort;

	int idx = ui.mCboDevices->findData( lastPort );
	ui.mCboDevices->setCurrentIndex( idx < 0 ? 0 : idx );
}

void MarineOptionDlg::popualteBaudRateTypes()
{
	ui.mCboBaudRate->addItem("4800", 4800);
	ui.mCboBaudRate->addItem("9600", 9600);
	ui.mCboBaudRate->addItem("38400", 38400);
	ui.mCboBaudRate->addItem("57600", 57600);
	ui.mCboBaudRate->addItem("115200", 115200);

	// remember the last ports used
	int lastbaudrate = g_app->GetConfig()->m_baudRate;

	int idx = ui.mCboBaudRate->findData( lastbaudrate );
	ui.mCboBaudRate->setCurrentIndex( idx < 0 ? 0 : idx );
}

void MarineOptionDlg::connectGps()
{
	QString COMport = ui.mCboDevices->itemData(ui.mCboDevices->currentIndex()).toString();
	
	int baudrate = ui.mCboBaudRate->currentText().toInt();
	
	g_app->GetConfig()->m_COMPort = COMport;
	g_app->GetConfig()->m_baudRate = baudrate;

	QApplication::setOverrideCursor( Qt::WaitCursor );

	MarineSystemLogic::instance()->attempConnect();

	if(MarineSystemLogic::instance()->marineConnection()->status() == MarineConnection::NotConnected)
	{
		QMessageBox::critical(this, tr("MarineSystem"), tr("failed to connect!"));
	}
	else
	{
		QMessageBox::information(this, tr("MarineSystem"), tr("success to connect!"));
	}

	QApplication::restoreOverrideCursor();
}

void MarineOptionDlg::on_mConnectButton_clicked()
{
	connectGps();
}

void MarineOptionDlg::on_mBtnRefreshDevices_clicked()
{
	populateDevices();
}

void MarineOptionDlg::accept()
{
	apply();
	QDialog::accept();
}

void MarineOptionDlg::reject()
{
	QDialog::reject();
}

void MarineOptionDlg::on_mBtnLicence_clicked()
{
	LicenceDlg dlg;
	dlg.exec();
}

void MarineOptionDlg::on_mBtnDeleteAllLog_clicked()
{
	int ret = QMessageBox::question(this, tr("MarineSystem"), tr("Would you like to delete all gps log?"), QMessageBox::Yes|QMessageBox::No);

	if(ret != QMessageBox::Yes)
		return;

	if(MarineLogManager::instance()->deleteAll())
	{
		QMessageBox::information(this, tr("MarineSystem"), tr("Success to delete all log!"));
	}
	else
	{
		QMessageBox::critical(this, tr("MarineSystem"), tr("Failed to delete all log!"));
	}
}

void MarineOptionDlg::on_mChkAutoMoveShip_stateChanged()
{
	if(ui.mChkAutoMoveShip->checkState() == Qt::Checked)
	{
		mAutoMoveToShip = true;
	}
	else
	{
		mAutoMoveToShip = false;
	}
}

void MarineOptionDlg::apply()
{
	g_app->GetConfig()->m_autoMoveShip = mAutoMoveToShip;
	g_app->GetConfig()->m_logoForever = mLogoForever;
	g_app->GetConfig()->m_logoDelaySecs = mLogoDelaySecs;
}

void MarineOptionDlg::on_mChkLogoForever_stateChanged()
{
	if(ui.mChkLogoForever->checkState() == Qt::Checked)
	{
		mLogoForever = true;
		ui.mSpbLogoDelaySec->setEnabled(false);
	}
	else
	{
		mLogoForever =false;
		ui.mSpbLogoDelaySec->setEnabled(true);
	}
}

void MarineOptionDlg::on_mSpbLogoDelaySec_valueChanged(int val)
{
	mLogoDelaySecs = val;
}