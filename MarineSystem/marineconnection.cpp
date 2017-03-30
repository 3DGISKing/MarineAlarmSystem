#include "marineconnection.h"

#include <QIODevice>
#include <QStringList>
#include "./../qextserialport/qextserialport.h"
#include "./../qextserialport/qextserialenumerator.h"

#include "marinesystem.h"
#include "config.h"

#include "qgisimport.h"
#include "qgsvectorlayer.h"
#include "qgsgeometry.h"
#include "marinesystemlogic.h"

BaudRateType baudRateFromInt(int i)
{
	if( i == 9600)
		return BAUD9600;
	else
		return BAUD9600;
}

QList< QPair<QString, QString> > MarineConnection::availablePorts()
{
	QList< QPair<QString, QString> > devs;

#ifdef linux
	// look for linux serial devices
	foreach ( QString linuxDev, QStringList() << "/dev/ttyS%1" << "/dev/ttyUSB%1" << "/dev/rfcomm%1" << "/dev/ttyACM%1" )
	{
		for ( int i = 0; i < 10; ++i )
		{
			if ( QFileInfo( linuxDev.arg( i ) ).exists() )
			{
				devs << QPair<QString, QString>( linuxDev.arg( i ), linuxDev.arg( i ) );
			}
		}
	}
#endif

#ifdef __FreeBSD__ // freebsd
	// and freebsd devices (untested)
	foreach ( QString freebsdDev, QStringList() << "/dev/cuaa%1" << "/dev/ucom%1" )
	{
		for ( int i = 0; i < 10; ++i )
		{
			if ( QFileInfo( freebsdDev.arg( i ) ).exists() )
			{
				devs << QPair<QString, QString>( freebsdDev.arg( i ), freebsdDev.arg( i ) );
			}
		}
	}
#endif

#ifdef sparc
	// and solaris devices (also untested)
	QString solarisDev( "/dev/cua/%1" );
	for ( char i = 'a'; i < 'k'; ++i )
	{
		if ( QFileInfo( solarisDev.arg( i ) ).exists() )
		{
			devs << QPair<QString, QString>( solarisDev.arg( i ), solarisDev.arg( i ) );
		}
	}
#endif

#if defined(Q_WS_WIN) || defined(Q_WS_MAC)
	QList<QextPortInfo> ports = QextSerialEnumerator::getPorts();
	foreach ( QextPortInfo port, ports )
	{
		devs << QPair<QString, QString>( port.portName, port.friendName );
	}
#endif

	// OpenBSD, NetBSD etc? Anyone?

	return devs;
}

MarineConnection::MarineConnection()
	: QObject(0)
{
	QString COMport = g_app->GetConfig()->m_COMPort; 
	BaudRateType type = baudRateFromInt( g_app->GetConfig()->m_baudRate );

	QextSerialPort *serial = new QextSerialPort( COMport, QextSerialPort::EventDriven );

	mSource = serial;

	serial->setBaudRate(type );
	serial->setFlowControl( FLOW_OFF );
	serial->setParity( PAR_NONE );
	serial->setDataBits( DATA_8 );
	serial->setStopBits( STOP_1 );

	mStatus = NotConnected;

	clearLastGPSInformation();

	if(g_app->GetConfig()->m_DeviceSimul)
		mTimer.start(10000, this);
	else
		QObject::connect( serial, SIGNAL( readyRead() ), this, SLOT( parseData() ) );
}

MarineConnection::~MarineConnection()
{
	cleanupSource();
	
	if(g_app->GetConfig()->m_DeviceSimul)
		mTimer.stop();
}

void MarineConnection::clearLastGPSInformation()
{
	mLastGPSInformation.direction = 0;
	mLastGPSInformation.elevation = 0;
	mLastGPSInformation.latitude = 0;
	mLastGPSInformation.longitude = 0;
	mLastGPSInformation.speed = 0;
	mLastGPSInformation.utcDateTime.setDate( QDate() );
	mLastGPSInformation.utcDateTime.setTime( QTime() );
}

void MarineConnection::cleanupSource()
{
	if ( mSource )
	{
		mSource->close();
	}

	delete mSource;
	mSource = 0;
}

bool MarineConnection::connect()
{
	if ( !mSource )
	{
		return false;
	}

	bool connected = mSource->open( QIODevice::ReadWrite | QIODevice::Unbuffered );
	if ( connected )
	{
		mStatus = Connected;
	}
	return connected;
}

bool MarineConnection::close()
{
	if ( !mSource )
	{
		return false;
	}

	mSource->close();
	return true;
}

void MarineConnection::setSource( QIODevice* source )
{
	cleanupSource();
	mSource = source;
	clearLastGPSInformation();
}


void MarineConnection::parseData()
{
	if ( !mSource )
	{
		return;
	}

	//print out the data as a test
	qint64 numBytes = 0;

	if ( ! mSource->isSequential() ) //necessary because of a bug in QExtSerialPort   //SLM - bytesAvailable() works on Windows, so I reversed the logic (added ! ); this is what QIODevice docs say to do; the orig impl of win_qextserialport had an (unsigned int)-1 return on error - it should be (qint64)-1, which was fixed by ?
	{
		numBytes = mSource->size();
	}
	else
	{
		numBytes = mSource->bytesAvailable();
	}

	qDebug( "numBytes: %d",  numBytes );

	if ( numBytes >= 0 )
	{
		if ( mStatus != GPSDataReceived )
		{
			mStatus = DataReceived;
		}

		//append new data to the remaining results from last parseData() call

		QByteArray data = mSource->read(numBytes);

		char nullc = 0;

		int nullindex = data.indexOf(nullc);

		while(nullindex != -1 )
		{
			data.remove(nullindex, 1);

			nullindex = data.indexOf(nullc);
		}

		QString s= QString::fromLocal8Bit(data.data());

		mStringBuffer.append( s );

		processStringBuffer();
		emit stateChanged( mLastGPSInformation );
	}
}

void MarineConnection::processStringBuffer()
{
	int endSentenceIndex = 0;
	int dollarIndex;

	while (( endSentenceIndex = mStringBuffer.indexOf( "\r\n" ) ) && endSentenceIndex != -1 )
	{
		endSentenceIndex = mStringBuffer.indexOf( "\r\n" );

		dollarIndex = mStringBuffer.indexOf( "$" );
		if ( endSentenceIndex == -1 )
		{
			break;
		}

		if ( endSentenceIndex >= dollarIndex )
		{
			if ( dollarIndex != -1 )
			{
				QString substring = mStringBuffer.mid( dollarIndex, endSentenceIndex );
				QByteArray ba = substring.toLocal8Bit();

				if ( substring.startsWith( "$G" ) )
				{
					qDebug( substring.toAscii().data() );
					processMarineSentence( ba.data(), ba.length() );
					mStatus = GPSDataReceived;
					qDebug( "*******************GPS data received****************" );
				}
				
				emit marineSentenceReceived( substring );  // added to be able to save raw data
			}
		}
		mStringBuffer.remove( 0, endSentenceIndex + 2 );
	}
}

/**
 * \brief Convert NDEG (NMEA degree) to fractional degree
 */
double nmea_ndeg2degree( double val )
{
  double deg = (( int )( val / 100 ) );
  val = deg + ( val - deg * 100 ) / 60;
  return val;
}

void MarineConnection::processMarineSentence( const char* data, int len )
{
	QString sentence = QString::fromLocal8Bit(data, len);

	QStringList tokens = sentence.split(",");


	QString shipid;

	if( tokens.size() > 0 )
	{
		if(tokens[0].startsWith("$G"))
			if(tokens[0].size() >= 4)
				shipid = tokens[0].mid(2,2);	
	}

	mLastGPSInformation.shipid = shipid;

	if( tokens.size() > 1 )
	{
		QString time = tokens[1];
		
		if(time.startsWith("T") && time.size() >=7 )
		{
			double hh = time.mid(1, 2).toInt();
			double mm = time.mid(3, 2).toInt();
			double ss = time.mid(5, 2).toInt();
			
			mLastGPSInformation.utcDateTime.setTime(QTime(hh, mm, ss));
		}
	}

	if( tokens.size() > 2 )
	{
		double lat = tokens[2].toDouble();
		
		mLastGPSInformation.latitude = nmea_ndeg2degree(lat);

	}

	if( tokens.size() > 4 )
	{
		double longi = tokens[4].toDouble();

		mLastGPSInformation.longitude = nmea_ndeg2degree(longi);

	}
}

void MarineConnection::timerEvent(QTimerEvent* even)
{
	QgsVectorLayer* shiplayer = MarineSystemLogic::instance()->shipLayer();

	if(shiplayer == NULL)
		return;

	QgsFeatureId id =  1 + (int)shiplayer->featureCount() * qrand()/(double)RAND_MAX;

	QgsFeature f;

	QgsFeatureRequest req;

	req.setFilterFid(id);
	
	QgsAttributeList attrlist=req.subsetOfAttributes();

	int shipidindex = shiplayer->fieldNameIndex("shipid");

	if (shipidindex != -1)
	{
		attrlist<<shipidindex;
	}

	req.setSubsetOfAttributes(attrlist);

	if ( !shiplayer->getFeatures( req ) .nextFeature( f ) || !f.geometry() )
		return ;

	QgsPoint p = f.geometry()->asMultiPoint().at(0);

	double x = p.x();
	double y = p.y();

	double rand=qrand();

	double rate=rand/RAND_MAX;
	rate=rate-0.5;

	double delta=0.1;

	mLastGPSInformation.longitude = x + rate * delta;
	mLastGPSInformation.latitude = y + rate * delta;
	mLastGPSInformation.utcDateTime = QDateTime::currentDateTime();
	mLastGPSInformation.shipid = f.attribute("shipid").toString();

	emit stateChanged( mLastGPSInformation );
}

