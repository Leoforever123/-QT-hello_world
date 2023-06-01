
#ifndef OLIVER_H
#define OLIVER_H


#include <QObject>


class Oliver : public QObject
{
    Q_OBJECT
public:
    explicit Oliver(QObject *parent = nullptr);

signals:

};

#endif // OLIVER_H
