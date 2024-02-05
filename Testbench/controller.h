#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QObject>
#include <QThread>

class Controller : public QObject
{
    Q_OBJECT
public:
    explicit Controller(QObject *parent =nullptr);

public slots:
    void Intersection(QVector<int> &inputs);
    void Unions(QVector<int> &inputs);
    void IntersectionLimited(QVector<int> &inputs);
    void UnionsLimited(QVector<int> &inputs);
signals:
    void writeUiReady(QList<QString> &str,QString title);
    void writeBarReady(int value);
private:
    QThread _thread;

};

#endif // CONTROLLER_H
