//
// Created by Temi4 on 13.09.2021.
//

#ifndef INC_2_LAB_QUQUE_ITEM_H
#define INC_2_LAB_QUQUE_ITEM_H

#include "rectangle.h"

class TQueue_item {
public:
  TQueue_item(const Rectangle &rectangle);

  TQueue_item(const TQueue_item &other);

  TQueue_item *
  SetNext(TQueue_item *next_); // присваивает значение следующему элементу

  TQueue_item *GetNext(); // возвращает указатель на следующий элемент

  Rectangle GetRectangle();

  friend ostream &operator<<(ostream &os, const TQueue_item &obj);

  virtual ~TQueue_item();

private:
  Rectangle rectangle;
  TQueue_item *next;
};

#endif // INC_2_LAB_QUQUE_ITEM_H
