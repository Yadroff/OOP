#include "tqueue.h"
#include <iostream>

using namespace std;

int main() {
  auto *q = new TQueue;
  vector<Point> v{Point(0, 0), Point(0, 1), Point(1, 1), Point(1, 0)};
  /*Rectangle r(v);
  ++r;
  Rectangle r1;
  cin >> r1;
  Rectangle r2 = r1 + r;
  TQueue_item q1(r1);
  cout << q1 << endl; */
  q->push(Rectangle(v));
  q->push(Rectangle());
  cout << *q << endl;
  q->Clear();
  cout << q->size() << endl;
  return 0;
}
