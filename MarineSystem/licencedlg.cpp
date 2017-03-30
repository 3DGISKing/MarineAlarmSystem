#include "licencedlg.h"
#include "key.h"
#include "config.h"
#include "marinesystem.h"
#include "MainWindow.h"
#include <QMessageBox>

LicenceDlg::LicenceDlg(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	
	QString modelnumber=GetPhysicalDrive0ModelNumber();

	if(modelnumber.isEmpty())
	{
		QMessageBox::critical(NULL, tr("MarineSystem"), tr("Failed to get model number!"));
		return;
	}

	ui.lineEditModelNumber->setInputMask("HHHH-HHHH-HHHH-HHHH");

	ui.lineEditModelNumber->setText(FormatKey(modelnumber,16));
	ui.lineEditLicence->setInputMask("HHHH-HHHH-HHHH-HHHH");
	ui.lineEditLicence->setText("0000000000000000");
	connect(ui.pushButtonClose,SIGNAL(clicked()),this,SLOT(accept()));
	connect(ui.pushButtonLicence,SIGNAL(clicked()),this,SLOT(setLicence()));
	trynumber=0;
}

LicenceDlg::~LicenceDlg()
{

}


void LicenceDlg::setLicence()
{
	QString licence=ui.lineEditLicence->text();
	licence.replace("-","");

	QString formatedserial=FormatKey(GetPhysicalDrive0ModelNumber(), 16);

	if(licence==FormatKey(GetKey(formatedserial),16))
	{
		QMessageBox::information(NULL, tr("MarineSystem"), tr("Licence Ok"));
		
		g_app->GetConfig()->m_key = licence;
		g_app->setLicened();

		accept();
	}
	else
	{
		QMessageBox::critical(NULL, tr("MarineSystem"), tr("Invalid licence. Inform me"));
		trynumber++;
		ui.lineEditLicence->setText("");

		if(trynumber==3)
			accept();
	}
}