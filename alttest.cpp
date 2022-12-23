#include "alttest.h"

AltTest::AltTest(QObject *parent)
    : QObject{parent}
    , IBroadcast{this}
{

}

void AltTest::receive(QVariant data)
{
    qDebug() << "Calling the receive slot from" << this->objectName() << "on" << data;
}
