//
// Created by Temi4 on 13.09.2021.
//

#include "tqueueitem.h"

TQueue_item::TQueue_item(const shared_ptr<Rectangle> &rectangle) {
  this->rectangle = rectangle;
  this->next = nullptr;
  cout << "Queue item: created" << endl;
}

TQueue_item::TQueue_item(const shared_ptr<TQueue_item> &other) {
  this->rectangle = other->rectangle;
  this->next = other->next;
  cout << "Stack item: copied" << endl;
}

shared_ptr<TQueue_item> TQueue_item::SetNext(shared_ptr<TQueue_item> &next_) {
  shared_ptr<TQueue_item> prev = this->next;
  this->next = next_;
  return prev;
}

shared_ptr<Rectangle> TQueue_item::GetRectangle() { return this->rectangle; }

shared_ptr<TQueue_item> TQueue_item::GetNext() { return this->next; }

TQueue_item::~TQueue_item() { cout << "Queue item: deleted" << endl; }

ostream &operator<<(ostream &os,
                    const TQueue_item &obj) { // перегруженный оператор вывода
  os << "{";
  os << *(obj.rectangle);
  os << "}" << endl;
  return os;
}