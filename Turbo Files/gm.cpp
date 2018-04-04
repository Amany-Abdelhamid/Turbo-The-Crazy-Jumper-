#include "GM.h"
#include "QBrush"
#include "Qimage"
#include "QTimer"
#include <QGraphicsTextItem>
#include <QFont>
#include "food.h"

Game::Game()
{
    QGraphicsScene * scene = new QGraphicsScene();
    scene->setBackgroundBrush(QBrush(QImage(":/images/background.png")));

    turbo * player = new turbo();
    player->setPixmap(QPixmap(":/images/snail..png"));
    player->setOffset(100,350);
    scene->addItem(player);
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();

     Enemy * enemy =new Enemy();
     scene->addItem(enemy);
     QTimer * timer1=new QTimer;
     QObject::connect(timer1,SIGNAL(timeout()),enemy,SLOT(Spwan()));
     timer1->start(2000);


     QTimer * timer2=new QTimer;
     QObject::connect(timer2,SIGNAL(timeout()),player,SLOT(spawn1()));
     timer2->start(1000);

      score= new Score();
     scene->addItem(score);

    QGraphicsView * view = new QGraphicsView();
    view->setScene(scene);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    view->show();
    view->setFixedSize(1000,500);
    scene->setSceneRect(0,0,1000,500);

}
