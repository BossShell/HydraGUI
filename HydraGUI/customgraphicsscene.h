#ifndef CUSTOMGRAPHICSSCENE_H
#define CUSTOMGRAPHICSSCENE_H

#include <QWidget>
#include <QPainter>
#include <QGraphicsScene>

class CustomGraphicsScene : public QGraphicsScene
{
public:
    CustomGraphicsScene();
    int getGridSize() const {return this->gridSize;}

protected:
    void drawBackGround(QPainter *painter, const QRectF &rect);

private:
    int gridSize;
};

#endif //CUSTOMGRAPHICSSCENE_H
