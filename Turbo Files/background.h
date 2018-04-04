#ifndef BACKGROUND_H
#define BACKGROUND_H
#include <QObject>
#include <QGraphicsPixmapItem>

class background: public QObject,public QGraphicsPixmapItem
{
    Q_OBJECT
public:
   background();
public slots:
  void move();

public slots:
 void repeat();

};
#endif // BACKGROUND_H
