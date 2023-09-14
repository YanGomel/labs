#include "widget.h"


Widget::Widget(QWidget *parent)
    : QWidget(parent)

{
    layout = new QVBoxLayout();
    setLayout(layout);

    labelFLAGI = new QLabel("Государственные флаги");
    layout->addWidget(labelFLAGI,0, Qt::AlignCenter);

    cbox1 = new QComboBox();
    cbox1->addItem("Автрия");
    cbox1->addItem("Германия");
    cbox1->addItem("Италия");
    cbox1->addItem("Англия");
    cbox1->addItem("Польша");

    layout->addWidget(cbox1,1,Qt::AlignTop);

    connect(cbox1, SIGNAL(currentIndexChanged(int)), this, SLOT(slotUpdate()));


}
void Widget::paintEvent(QPaintEvent*)
{
    int i = cbox1->currentIndex();
    if(i == 0){
    QPainterPath path;

    QRect rect(width()/4, height()/4, width()/2, height()/2);
    path.addRect(rect);

    QPainter painter(this);
    painter.setPen(QPen(Qt::black, 1));
    painter.drawPath(path);

    // Рисуем красную полосу (верхняя)
    QRect redRect(width()/4, height()/4, width()/2, height()/6);
    painter.fillRect(redRect, Qt::red);

    // Рисуем белую полосу (средняя)
    QRect whiteRect(width()/4, height()/4 + height()/6, width()/2, height()/3);
    painter.fillRect(whiteRect, Qt::white);

    // Рисуем красную полосу (нижняя)
    QRect redRect2(width()/4, height()/4 + 2*height()/6, width()/2, height()/6);
    painter.fillRect(redRect2, Qt::red);}

    else if (i==1){
    QPainterPath path;

    QRect rect(width()/4, height()/4, width()/2, height()/2);
    path.addRect(rect);

    QPainter painter(this);
    painter.setPen(QPen(Qt::black, 1));
    painter.drawPath(path);

    // Рисуем красную полосу (верхняя)
    QRect redRect(width()/4, height()/4, width()/2, height()/6);
    painter.fillRect(redRect, Qt::black);

    // Рисуем белую полосу (средняя)
    QRect whiteRect(width()/4, height()/4 + height()/6, width()/2, height()/3);
    painter.fillRect(whiteRect, Qt::red);

    // Рисуем красную полосу (нижняя)
    QRect redRect2(width()/4, height()/4 + 2*height()/6, width()/2, height()/6);
    painter.fillRect(redRect2, Qt::yellow);}

    else if(i == 2){
    QPainterPath path;

    QRect rect(width() / 4, height() / 4, width() / 2, height() / 2);
    path.addRect(rect);

    QPainter painter(this);
    painter.setPen(QPen(Qt::black, 1));
    painter.drawPath(path);

    // Рисуем зеленую полосу (левая)
    QRect greenRect(width() / 4, height() / 4, width() / 6, height() / 2);
    painter.fillRect(greenRect, Qt::green);

    // Рисуем белую полосу (средняя)
    QRect whiteRect(width() / 4 + width() / 6, height() / 4, width() / 6, height() / 2);
    painter.fillRect(whiteRect, Qt::white);

    // Рисуем красную полосу (правая)
    QRect redRect(width() / 4 + 2 * width() / 6, height() / 4, width() / 6, height() / 2);
    painter.fillRect(redRect, Qt::red);

    }
    else if(i==3){
    QPainterPath path;

    QRect rect(width() / 4, height() / 4, width() / 2, height() / 2);
    path.addRect(rect);

    QPainter painter(this);
    painter.setPen(QPen(Qt::black, 1));
    painter.drawPath(path);

    // Рисуем белый фон
    QRect whiteRect(width() / 4, height() / 4, width() / 2, height() / 2);
    painter.fillRect(whiteRect, Qt::white);

    // Рисуем красный крест (красный флаг Англии)
    QRect redCrossHorizontalRect(width() / 4, height() / 2 - height() / 20, width() / 2, height() / 10);
    painter.fillRect(redCrossHorizontalRect, Qt::red);

    QRect redCrossVerticalRect(width() / 2 - width() / 20, height() / 4, width() / 10, height() / 2);
    painter.fillRect(redCrossVerticalRect, Qt::red);


    }
    else if(i==4){
    QPainterPath path;

    QRect rect(width() / 4, height() / 4, width() / 2, height() / 2);
    path.addRect(rect);

    QPainter painter(this);
    painter.setPen(QPen(Qt::black, 1));
    painter.drawPath(path);

    // Рисуем белую полосу (верхняя)
    QRect whiteRect(width() / 4, height() / 4, width() / 2, height() / 4);
    painter.fillRect(whiteRect, Qt::white);

    // Рисуем красную полосу (нижняя)
    QRect redRect(width() / 4, height()/2, width() / 2, height() / 4);
    painter.fillRect(redRect, Qt::red);


    }

}

void Widget::slotUpdate()
{
    qDebug()<<"Евреев не трепим";
    update();
}

Widget::~Widget()
{

}

