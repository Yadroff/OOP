//
// Created by Temi4 on 13.09.2021.
//

#include "tqueueitem.h"

TQueue_item::TQueue_item(const Rectangle &rectangle) {
  this->rectangle = rectangle;
  this->next = nullptr;
  cout << "Queue item: created" << endl;
}

TQueue_item::TQueue_item(const TQueue_item &other) {
  this->rectangle = other.rectangle;
  this->next = other.next;
  cout << "Stack item: copied" << endl;
}

TQueue_item *TQueue_item::SetNext(TQueue_item *next_) {
  TQueue_item *prev = this->next;
  this->next = next_;
  return prev;
}

Rectangle TQueue_item::GetRectangle() { return this->rectangle; }

TQueue_item *TQueue_item::GetNext() { return this->next; }

TQueue_item::~TQueue_item() {
  cout << "Queue item: deleted" << endl;
  delete next;
}

ostream &operator<<(ostream &os,
                    const TQueue_item &obj) { // перегруженный оператор вывода
  os << "{";
  os << obj.rectangle;
  os << "}" << endl;
  return os;
}