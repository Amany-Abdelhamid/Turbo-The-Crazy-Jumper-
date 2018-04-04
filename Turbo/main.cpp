#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include "turbo.h"
#include "Enemy.h"
#include "Food.h"
#include "QTimer"
#include "QBrush"
#include "Qimage"
#include "score.h"
#include "gm.h"
 Game *GM;
Score *score;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

   GM=new Game();
    return a.exec();
}
