#include"Food.h"
#include <QGraphicsScene>
#include <QTimer>
#include <Qlist>
#include "turbo.h"
#include <QGraphicsScene>
#include "score.h"
#include "gm.h"
extern Game *GM;
//extern Score *score;
Food::Food()//: QObject(), QGraphicsPixmapItem()
{
    int random_number=rand() %50;
    setPixmap(QPixmap(":/images/strawberry.png"));
    setOffset(random_number+1000,rand()%70+70);
    QTimer * timer = new QTimer(this);
    connect (timer,SIGNAL(timeout()),this,SLOT(move()));
    timer ->start(60);
}


void Food:: move()
{
        QList<QGraphicsItem *>colliding_Items=collidingItems();
        for (int i=0, n=colliding_Items.size(); i<n ;++i)
        {
            if(typeid(*(colliding_Items[i]))==typeid(turbo))
            {
                GM->score->increase();
                scene()->removeItem(this);
                 delete this;
            return;
            }
        }
        setPos(x()-10,y());
 }

