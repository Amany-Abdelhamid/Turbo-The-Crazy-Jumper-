#include "background.h"
#include "QTimer"
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>


background::background()
{

    setPixmap(QPixmap(":/images/B2.png"));

    QTimer * timer1 =new QTimer();
    connect(timer1,SIGNAL(timeout()),this,SLOT(move()));
    timer1->start(50);
}

void background::move()
{
    setPos(x()-10,y());
}

void background::repeat()
{

    background * item2=new background();
    item2->setPixmap(QPixmap(":/images/background2.png"));
    item2->setOffset(1000,0);
    scene()->addItem(item2);         

}

