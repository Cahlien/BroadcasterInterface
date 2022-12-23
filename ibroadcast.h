#ifndef IBROADCAST_H
#define IBROADCAST_H

#include <QVariant>
#include <QDebug>

class IBroadcast
{
public:
    IBroadcast(const QObject* qobject);
    virtual ~IBroadcast();

    void broadcast(QVariant data);
    virtual void receive(QVariant data) = 0;
};

#endif // IBROADCAST_H
