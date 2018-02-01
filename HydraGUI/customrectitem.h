#ifndef CUSTOMRECTITEM_H
#define CUSTOMRECTITEM_H

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsItem>

class CustomRectItem
{
public:
    CustomRectItem(const QRect& rect, QGraphicsItem* parent, QGraphicsScene* scene);

protected:
    QVariant itemChange(GraphicsItemChange change, const QVariant &value);
};

#endif //CUSTOMRECTITEM_H
