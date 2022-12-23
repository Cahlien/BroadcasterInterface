#ifndef ALTTEST_H
#define ALTTEST_H

#include <QObject>

#include "ibroadcast.h"

class AltTest : public QObject, public IBroadcast
{
    Q_OBJECT
public:
    explicit AltTest(QObject *parent = nullptr);

public slots:
    void receive(QVariant data) override;
};

#endif // ALTTEST_H
