#include "broadcaster.h"
#include <QDebug>

const Broadcaster& Broadcaster::instance()
{
    static Broadcaster broadcaster{};
    return broadcaster;
}

Broadcaster::Broadcaster(QObject *parent)
    : QObject{parent}
{
    qDebug() << "Broadcaster constructor called";
}

Broadcaster::~Broadcaster()
{
    qDebug() << "Broadcaster destructor called";
}
