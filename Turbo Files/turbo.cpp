#include "turbo.h"
#include <QKeyEvent>
#include "food.h"
#include <QList>
#include <QGraphicsScene>

void turbo ::keyPressEvent(QKeyEvent*event)
{
    if(event->key()== Qt::Key_Space )
    {

      setPos(x(),y()-250);
    }
}

void turbo ::keyReleaseEvent(QKeyEvent *event)
{
    if(event->key()== Qt::Key_Space )
    {
      setPos(x(),y()+250);
    }
}

void turbo::spawn1()
{
    Food * food = new Food();
    scene()->addItem(food);
}


