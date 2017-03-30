#ifndef MARINESYSTEM_H
#define MARINESYSTEM_H

#include "qgisimport.h"
#include "qgsapplication.h" 

class Config;
class MainWindow;

class MarineSystem : public QgsApplication
{
	Q_OBJECT

public:
	MarineSystem(int & argc, char ** argv);
	~MarineSystem();

	void SetMainWindow(MainWindow *w)
	{   m_mainWnd = w; }

	MainWindow* GetMainWindow()
	{   return m_mainWnd; }

	Config* GetConfig()
	{	return m_config; }

	void initConfig();
	bool licenced() {return m_licenced ;}
	void setLicened();

private:
	QString pluginPath();

	QString			mStyleSheet;

private:
	MainWindow		*m_mainWnd;
	Config			*m_config;

	bool             m_licenced;


};

extern MarineSystem *g_app;
#endif // MARINESYSTEM_H
