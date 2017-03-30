#include "marinesystem.h"

#include "qgisimport.h"
#include "qgsmapcanvas.h"

#include "marin_style.h"
#include "config.h"

#include "qgsproviderregistry.h"
#include "qgsmaplayerregistry.h"
#include "mainwindow.h"

MarineSystem* g_app;

MarineSystem::MarineSystem(int & argc, char ** argv)
	: QgsApplication(argc, argv, true)
{
	g_app = this ;

	m_mainWnd = NULL;
	m_config = NULL;
	m_licenced = false;

	// set the provider plugin path (this creates provider registry)
	QgsProviderRegistry::instance( pluginPath() );

	// create map layer registry if doesn't exist
	QgsMapLayerRegistry::instance();

	//set style sheet
	mStyleSheet = GENERALSTYLE;
	setStyleSheet(mStyleSheet);

	initConfig();
}

MarineSystem::~MarineSystem()
{
	m_config->writeSettings();

	delete m_config;
}

QString MarineSystem::pluginPath()
{
#ifdef _DEBUG
		return 	"C:\\QGISbuild\\output\\plugins\\Debug";
#else
		return applicationDirPath()+QString("/providers");
#endif

}
void MarineSystem::initConfig()
{
	m_config = new Config();

	if (m_config)
	{
		m_config->readSettings();
	}
}

void MarineSystem::setLicened()
{
	m_licenced = true;

	if(m_mainWnd)
	{
		m_mainWnd->mapCanvas()->freeze(false);
		m_mainWnd->mapCanvas()->refresh();
	}
}