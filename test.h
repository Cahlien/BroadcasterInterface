#ifndef TEST_H
#define TEST_H

#include <QObject>

#include "ibroadcast.h"

class Test : public QObject, public IBroadcast
{
    Q_OBJECT
public:
    explicit Test(QObject *parent = nullptr);

signals:


    // IBroadcast interface
public slots:
    void receive(QVariant data) override;
};

#endif // TEST_H
