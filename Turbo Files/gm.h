#ifndef GM_H
#define GM_H
#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include "turbo.h"
#include "score.h"
#include "enemy.h"

class Game :public QGraphicsView
{
public:
    Game();

     QGraphicsScene * scene ;
     turbo * player ;
      Score * score;
      Enemy * enemy ;
};

#endif // GM_H
