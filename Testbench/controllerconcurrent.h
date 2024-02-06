#ifndef CONTROLLERCONCURRENT_H
#define CONTROLLERCONCURRENT_H

#include <QObject>
#include <QtConcurrent/QtConcurrent>
#include <QFuture>
#include <QList>
class ControllerConcurrent : public QObject
{
    Q_OBJECT
public:
    explicit ControllerConcurrent(QObject *parent = nullptr);
public slots:
    void IntersectionConcurrent(QVector<int> &inputs);
    void UnionsConcurrent(QVector<int> &inputs);
signals:
    void writeUiReady(QList<QString> &str,QString title);
    void writeUiReadyUnion(QList<int> &num,QString title);
    void writeBarReady(int value);
private:
    QList<int> PrepareAB_CompareAB(const QVector<int> &inputs);
    QList<int> PrepareC(const QVector<int> &inputs);
    QList<int> CompareABC(const QList<int> intersec, const QList<int> C);
    QList<int> PrepareA(const QVector<int> &inputs);
    QList<int> PrepareB(const QVector<int> &inputs);
    QList<int> PrepareCu(const QVector<int> &inputs);
};

#endif // CONTROLLERCONCURRENT_H
