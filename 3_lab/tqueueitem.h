//
// Created by Temi4 on 13.09.2021.
//

#ifndef INC_3_LAB_QUQUE_ITEM_H
#define INC_3_LAB_QUQUE_ITEM_H

#include "rectangle.h"
#include <memory>

class TQueue_item {
public:
  TQueue_item(const shared_ptr<Rectangle> &rectangle);

  TQueue_item(const shared_ptr<TQueue_item> &other);

  shared_ptr<TQueue_item>
  SetNext(shared_ptr<TQueue_item>
              &next_); // присваивает значение следующему элементу

  shared_ptr<TQueue_item>
  GetNext(); // возвращает указатель на следующий элемент

  shared_ptr<Rectangle> GetRectangle();

  friend ostream &operator<<(ostream &os, const TQueue_item &obj);

  virtual ~TQueue_item();

private:
  shared_ptr<Rectangle> rectangle;
  shared_ptr<TQueue_item> next;
};

#endif // INC_3_LAB_QUQUE_ITEM_H
