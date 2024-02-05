#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
    void onInterSectionClicked();
    void onUnionsClicked();
    void writeUi(QList<QString> &str, QString t);
    void onAGroupBoxToggled(bool checked);
    void onBGroupBoxToggled(bool checked);
    void writeProgressBar(int value);
signals:
    void AIntersectionSig(QVector<int> &ins);
    void AUnionsSig(QVector<int> &ins);
    void BIntersectionSig(QVector<int> &ins);
    void BUnionsSig(QVector<int> &ins);
private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
