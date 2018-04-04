#include "score.h"
#include <QFont>
#include<QString>

Score::Score(QGraphicsItem *parent):QGraphicsTextItem(parent)
{
    score=0;
    setPlainText(QString("Score: ") + QString::number(score));
    setDefaultTextColor(Qt::blue);
    setFont(QFont("times",16));

}
int Score::getscore()
{
    return score;
}
void Score:: increase()
{
   score++;
   setPlainText(QString("Score: ") + QString::number(score));
}