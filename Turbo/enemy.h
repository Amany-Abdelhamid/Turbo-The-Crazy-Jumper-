#ifndef ENEMY_H
#define ENEMY_H
#include<QGraphicsPixmapItem>
#include<QObject>

class Enemy: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Enemy();
public slots:
    void move();
public slots:
 void Spwan();
};

#endif // ENEMY_H
