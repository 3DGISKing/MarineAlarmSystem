#include "config.h"

#include <QSettings>

#include "marinesystem.h"

#include "key.h"

Config::Config()
{
	m_fullScreen    =  false;
	m_showMenubar   =  true;
	m_COMPort       =  "";
	m_baudRate      =  9600;
	m_key           = "";
	m_autoMoveShip  = true;
	m_logoForever   = true;
	m_logoDelaySecs = 5;
	m_rightDockWidth = 256;
	m_DeviceSimul    = false;
}

Config::~Config()
{

}

void Config::readSettings()
{
	QSettings set(QApplication::applicationDirPath() + "\\conf.ini", QSettings::IniFormat);

	m_fullScreen    = set.value("Option/FullScreen", m_fullScreen).toBool();
	m_showMenubar   = set.value("Option/ViewMenu", m_showMenubar).toBool();
	m_COMPort       = set.value("Option/COMPort", m_COMPort).toString();
	m_baudRate      = set.value("Option/BaudRate", m_baudRate).toInt();
	m_key           = set.value("Option/Key", m_key).toString();
	m_autoMoveShip  = set.value("Option/AutoMoveShip", m_autoMoveShip).toBool();
	m_logoForever   = set.value("Option/LogoForever" , m_logoForever).toBool();
	m_logoDelaySecs = set.value("Option/LogoDelaySeconds", m_logoDelaySecs).toInt();
	m_rightDockWidth = set.value("Option/RightDockWidth", m_rightDockWidth).toInt();
	m_DeviceSimul = set.value("Option/DeviceSimul", m_DeviceSimul).toBool();

	QString formatedserial=FormatKey(GetPhysicalDrive0ModelNumber(), 16);

	if(m_key==FormatKey(GetKey(formatedserial),16))
	{
		g_app->setLicened();
	}
}

void Config::writeSettings()
{
	QSettings set(QApplication::applicationDirPath() + "\\conf.ini", QSettings::IniFormat);

	set.setValue("Option/FullScreen", m_fullScreen);
	set.setValue("Option/ViewMenu", m_showMenubar);
	set.setValue("Option/COMPort", m_COMPort);
	set.setValue("Option/BaudRate", m_baudRate);
	set.setValue("Option/Key", m_key);
	set.setValue("Option/AutoMoveShip", m_autoMoveShip);
	set.setValue("Option/LogoForever" , m_logoForever);
	set.value("Option/LogoDelaySeconds", m_logoDelaySecs);
	set.value("Option/RightDockWidth", m_rightDockWidth);
	set.value("Option/DeviceSimul", m_DeviceSimul);
}
