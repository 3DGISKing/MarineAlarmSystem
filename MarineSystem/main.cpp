#include "mainwindow.h"

#include <QSplashScreen>
#include <QSettings>
#include <QPixmap>
#include <QBitmap>
#include <QTranslator>
#include <QMessageBox>

#include "marinesystem.h"
#include "marinesystemlogic.h"
#include "marinelogmanager.h"
#include "config.h"

int main(int argc, char *argv[])
{
	MarineSystem app(argc, argv);

	app.addLibraryPath(app.applicationDirPath() + "\\plugins");
	app.setPkgDataPath(app.applicationDirPath());

	QTranslator marinesystemtor( 0 );
	QTranslator qgistor( 0 );
	QTranslator qttor( 0 );

	if ( marinesystemtor.load( app.applicationDirPath() + "\\marinesystem_ko.qm" ))
    {
      app.installTranslator( &marinesystemtor );
    }
    else
    {
      qWarning( "loading of marinesystem translation failed " );
    }

	if ( qgistor.load( app.applicationDirPath() + "\\qgis_ko.qm" ) )
	{
		app.installTranslator( &qgistor );
	}
	else
	{
		qWarning( "loading of qgis translation failed" );
	}

    if ( qttor.load( app.applicationDirPath() + "\\qt_ko.qm" ) )
    {
      app.installTranslator( &qttor );
    }
    else
    {
      qWarning( "loading of qt translation failed" );
    }

	MarineLogManager::instance();

	//set up splash screen
	QPixmap myPixmap(":/images/images/splash.svg" );

	QSplashScreen *mypSplash = new QSplashScreen( myPixmap );

	mypSplash->setMask( myPixmap.mask() );
	mypSplash->show();

	MainWindow w(mypSplash);

	mypSplash->finish(&w);

	bool fullscreen = g_app->GetConfig()->m_fullScreen;

	if (fullscreen)
		w.showFullScreen();
	else
		w.showMaximized();

	w.initUpdate();
	w.updateMenuBar(false);

	MarineSystemLogic::instance()->attempConnect();
	
	if(g_app->GetConfig()->m_DeviceSimul == false)
		if(MarineSystemLogic::instance()->marineConnection()->status() == MarineConnection::NotConnected)
		{
			QMessageBox::critical(NULL , QString::fromLocal8Bit("ºãº¤º¡ÊÕºÏ ÃÍº¬¼èÃë¾Ë±Ë"), QString::fromLocal8Bit("»þ¾·µÚ°ÎËæ »¨Â²Â×Êî»¡³£³Þ!"));
		}

	return app.exec();
}
