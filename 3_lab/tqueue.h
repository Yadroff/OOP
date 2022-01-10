//
// Created by Temi4 on 13.09.2021.
//

#ifndef INC_2_LAB_TQUEUE_H
#define INC_2_LAB_TQUEUE_H

#include "tqueueitem.h"

class TQueue {
public:
  TQueue();

  TQueue(const TQueue &other) = default;

  ~TQueue();

  friend ostream &operator<<(ostream &os, const TQueue &q);

  bool push(shared_ptr<Rectangle> &&rectangle);

  bool pop();

  shared_ptr<Rectangle> top();

  bool empty();

  size_t size();

private:
  shared_ptr<TQueue_item> first;
  shared_ptr<TQueue_item> last;
  size_t n;
};

#endif // INC_2_LAB_TQUEUE_H
