#ifndef KEY_H
#define KEY_H

#include <QString>

QString GetPhysicalDrive0ModelNumber();
QString GetKey(QString deviceInfo);
QString FormatKey(QString strKey, int size);

#endif