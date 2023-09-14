#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QApplication>
#include <QtWidgets>
#include <QComboBox>
#include <QVBoxLayout>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

protected:
void paintEvent(QPaintEvent *) override;


public:
    QVBoxLayout *layout = NULL;
    QComboBox *cbox1 = NULL;
    QLabel *labelFLAGI = NULL;
    Widget(QWidget *parent = nullptr);
    ~Widget();
public slots:
    void slotUpdate();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
