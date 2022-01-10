#include "tqueue.h"
#include <iostream>

using namespace std;

int main() {
  TQueue queue;
  vector<Point> v{Point(0, 0), Point(0, 1), Point(1, 1), Point(1, 0)};
  queue.push(make_shared<Rectangle>(Rectangle(v)));
  queue.push(make_shared<Rectangle>(Rectangle()));
  cout << queue;
  return 0;
}
