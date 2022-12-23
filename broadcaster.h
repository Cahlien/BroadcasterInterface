#ifndef BROADCASTER_H
#define BROADCASTER_H

#include <QObject>
#include <QVariant>

class Broadcaster : public QObject
{
    Q_OBJECT

    // TODO: add enum class for message types
    // TODO: add map of message type enums to data structure of QObject pointers for targeted broadcast
    // TODO: add targeted broadcast to reduce overhead
    // TODO: add register method
    // TODO: add deregister method

public:
    static const Broadcaster& instance();

    Broadcaster(const Broadcaster&) = delete;
    Broadcaster(Broadcaster&&) = delete;

    const Broadcaster& operator=(const Broadcaster&) = delete;
    const Broadcaster& operator=(Broadcaster&&) = delete;

signals:
    void broadcast(QVariant data) const;

private:
    explicit Broadcaster(QObject *parent = nullptr);
    ~Broadcaster();
};

#endif // BROADCASTER_H
