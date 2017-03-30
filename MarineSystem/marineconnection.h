#ifndef MARINECONNECTION_H
#define MARINECONNECTION_H

#include <QObject>
#include <QDateTime>
#include <QPair>
#include <QBasicTimer>

class QIODevice;

struct MarineGPSInformation
{
	QString shipid;
	double latitude;
	double longitude;
	double elevation;
	double speed; //in km/h
	double direction;
	QDateTime utcDateTime;
};

class MarineConnection : public QObject
{
	Q_OBJECT

public:

	enum Status
	{
		NotConnected,
		Connected,
		DataReceived,
		GPSDataReceived
	};

	MarineConnection();
	~MarineConnection();

	static QList< QPair<QString, QString> > availablePorts();

	/**Opens connection to device*/
	bool connect();
	/**Closes connection to device*/
	bool close();

	/**Sets the GPS source. The class takes ownership of the device class*/
	void setSource( QIODevice* source );

	/**Returns the status. Possible state are not connected, connected, data received*/
	Status status() const { return mStatus; }

protected:
	virtual void timerEvent(QTimerEvent* event);

private slots:
	/**Parse available data source content*/
	void parseData();

private:
	/**Closes and deletes mSource*/
	void cleanupSource();
	void clearLastGPSInformation();

	/**Splits mStringBuffer into sentences and calls libnmea*/
	void processStringBuffer();

	void processMarineSentence( const char* data, int len );

signals:
	void stateChanged( const MarineGPSInformation& info );
	void marineSentenceReceived( const QString& substring ); // added to capture 'raw' data

private:	
	/**Data source (e.g. serial device, socket, file,...)*/
	QIODevice* mSource;

	/**Last state of the gps related variables (e.g. position, time, ...)*/
	MarineGPSInformation mLastGPSInformation;

	/**Connection status*/
	Status mStatus;

	/**Store data from the device before it is processed*/
	QString mStringBuffer;

	QBasicTimer   mTimer;
};

#endif // MARINECONNECTION_H
