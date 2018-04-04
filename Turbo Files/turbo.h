 #ifndef TURBO_H
#define TURBO_H
#include <QGraphicsPixmapItem>
#include <QObject>

class turbo :public QObject ,public QGraphicsPixmapItem
{
    Q_OBJECT

public :
    void keyPressEvent(QKeyEvent*event);
    void keyReleaseEvent(QKeyEvent*event);
public slots:
    void spawn1();
};

#endif // TURBO_H
