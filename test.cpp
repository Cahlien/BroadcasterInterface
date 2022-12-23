#include "test.h"

Test::Test(QObject *parent)
    : QObject{parent}
    , IBroadcast{this}
{

}

void Test::receive(QVariant data)
{
    qDebug() << "Receive slot called for" << this->objectName() << "on" << data;
}
