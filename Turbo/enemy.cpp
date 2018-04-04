#include"Enemy.h"
#include<QGraphicsScene>
#include<QTimer>
#include<QList>
#include "turbo.h"
#include <QFont>
#include <QGraphicsTextItem>
int sp;

Enemy::Enemy(): QObject(),QGraphicsPixmapItem()
{
   int random_number=rand() %500;
   setPixmap(QPixmap(":/images/enemy.png"));
   setOffset(random_number+1000,350);
    QTimer *timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(60);
    if(sp==1)
        timer->stop();
}
void Enemy::move(){
    setPos(x()-10,y());
   /* if(pos().x()+2500 <0){
        scene()->removeItem(this);
        delete this;
    }*/
    QList<QGraphicsItem *>colliding_Items=collidingItems();
    for (int i=0, n=colliding_Items.size(); i<n ;++i)
    {
        if(typeid(*(colliding_Items[i]))==typeid(turbo))
        {
            QGraphicsTextItem * text=new QGraphicsTextItem();
           text-> setPlainText(QString("Game Over"));
           text-> setDefaultTextColor(Qt::black);
           text-> setFont(QFont("times",130));
            scene()->addItem(text);
            sp=1;
            scene()->removeItem(colliding_Items[i]);
             delete colliding_Items[i];
        return;
        }
    }
}

void Enemy::Spwan()
{
    Enemy *enemy=new Enemy();
    scene()->addItem(enemy);

}
