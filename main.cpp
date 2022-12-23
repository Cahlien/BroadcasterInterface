#include <QCoreApplication>
#include <QDebug>
#include <QtConcurrent>

#include <iostream>

#include "broadcaster.h"
#include "test.h"
#include "alttest.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qDebug() << "Hey!";
    Test test1{};
    test1.setObjectName("Test Object #1");
    AltTest test2{};
    test2.setObjectName("Test Object #2");

//    emit Broadcaster::instance().broadcast("Hello from the Broadcaster!");
    for(int i{}; i < 1000; ++i)
    {
        auto result = QtConcurrent::run([=](){
            qDebug() << "Broadcaster" << &Broadcaster::instance() << "is broadcasting from thread" << QThread::currentThread() << ".";
            emit Broadcaster::instance().broadcast("Hello from" + QThread::currentThread()->objectName() + "!");
        });
    }


    return a.exec();
}
