#ifndef CONFIG_H
#define CONFIG_H

#include <QString>

class Config
{
public:
	Config();
	~Config();

	void readSettings();
	void writeSettings();

	bool m_fullScreen;
	bool m_showMenubar;

	QString m_COMPort;
	int     m_baudRate;
	QString m_key;
	bool    m_autoMoveShip;
	int     m_logoDelaySecs;
	bool    m_logoForever;
	int     m_rightDockWidth;
	bool    m_DeviceSimul;
};

#endif // CONFIG_H
