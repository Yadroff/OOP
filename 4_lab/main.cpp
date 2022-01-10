#include "rectangle.h"
#include "tqueue.h"
#include <iostream>

using namespace std;

int main() {
  vector<Point> v{Point(0, 0), Point(0, 1), Point(1, 1), Point(1, 0)};
  {
    TQueue_item<Rectangle> item(make_shared<Rectangle>(v));
    cout << item;
  }
  TQueue<Rectangle> queue;
  queue.push(make_shared<Rectangle>(v));
  queue.push(make_shared<Rectangle>());
  cout << queue;
  return 0;
}
