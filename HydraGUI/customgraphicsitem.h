#ifndef CUSTOMGRAPHICSITEM_H
#define CUSTOMGRAPHICSITEM_H

#include <QWidget>
#include <QPainter>
#include <QGraphicsItem>

class CustomGraphicsItem : public QGraphicsItem
{
public:
    CustomGraphicsItem();

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

    bool Pressed;

protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
};

#endif //CUSTOMGRAPHICSITEM_H
