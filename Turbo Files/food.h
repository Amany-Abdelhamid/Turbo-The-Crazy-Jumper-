#ifndef FOOD_H
#define FOOD_H
#include<QGraphicsPixmapItem>
#include<QObject>


class Food : public QObject,public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Food();
public slots:
    void move();
};

#endif // FOOD_H
