#include "customgraphicsitem.h"

CustomGraphicsItem::CustomGraphicsItem()
{
    Pressed = false;
    setFlag(ItemIsMovable);
}

QRectF CustomGraphicsItem::boundingRect() const
{
    return QRectF(0, 0, 100, 100);
}

void CustomGraphicsItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QRectF rect = boundingRect();
    QBrush brush(Qt::blue);

    if(Pressed)
    {
        brush.setColor(Qt::red);
    }
    else
    {
        brush.setColor(Qt::green);
    }

    painter->fillRect(rect, brush);
    painter->drawRect(rect);
}

void CustomGraphicsItem::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    Pressed = true;
    update();
    QGraphicsItem::mousePressEvent(event);
}

void CustomGraphicsItem::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    Pressed = false;
    update();
    QGraphicsItem::mouseReleaseEvent(event);
}
