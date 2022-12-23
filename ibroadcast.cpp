#include "ibroadcast.h"
#include "broadcaster.h"

IBroadcast::IBroadcast(const QObject* qobject)
{
    qDebug() << "IBroadcast constructor called with lambda";
    QObject::connect(&Broadcaster::instance(), &Broadcaster::broadcast, qobject, [=](QVariant data){this->receive(data);});
}

IBroadcast::~IBroadcast()
{
    qDebug() << "IBroadcast destructor called";
}

void IBroadcast::broadcast(QVariant data)
{
    qDebug() << "IBroadcast broadcasting";
    emit Broadcaster::instance().broadcast(data);
}
