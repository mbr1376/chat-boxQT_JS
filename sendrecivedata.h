#ifndef SENDRECIVEDATA_H
#define SENDRECIVEDATA_H

#include <QObject>

class SendReciveData : public QObject
{
    Q_OBJECT
public:
    explicit SendReciveData(QObject *parent = nullptr);

signals:

};

#endif // SENDRECIVEDATA_H
