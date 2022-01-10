#include "rectangle.h"

double Rectangle::Area() { return (abs(a.x_ - b.x_) * abs(a.y_ - b.y_)); }

Rectangle::Rectangle() : a(), b(), c(), d() {
  cout << "Default rectangle is created" << endl;
}

Rectangle::Rectangle(const Rectangle &other) {
  a = other.a;
  b = other.b;
  c = other.c;
  d = other.d;
  cout << "Made copy of Rectangle" << endl;
}

Rectangle::Rectangle(vector<Point> v) : a(v[0]), b(v[1]), c(v[2]), d(v[3]) {
  cout << "Rectangle with vertices " << a << ", " << b << ", " << c << ", " << d
       << " was created" << endl;
}

istream &operator>>(istream &is, Rectangle &obj) {
  cout << "Enter cords" << endl;
  is >> obj.a >> obj.b >> obj.c >> obj.d;
  return is;
}

ostream &operator<<(ostream &os, const Rectangle &obj) {
  os << "Rectangle: " << obj.a << ", " << obj.b << ", " << obj.c << ", "
     << obj.d;
  return os;
}

Rectangle &Rectangle::operator++() { // инкрементируем каждую вершину
  ++this->a;
  ++this->b;
  ++this->c;
  ++this->d;
  return *this;
}

Rectangle operator+(const Rectangle &left, const Rectangle &right) {
  vector<Point> v{left.a + right.a, left.b + right.b, left.c + right.c,
                  left.d + right.d};
  return Rectangle(v);
}

Rectangle &Rectangle::operator=(const Rectangle &other) {
  if (this == &other) {
    return *this;
  }
  this->a = other.a;
  this->b = other.b;
  this->c = other.c;
  this->d = other.d;
  return *this;
}

Rectangle::~Rectangle() { cout << "Rectangle was deleted" << endl; }

size_t Rectangle::VertexNumbers() { return 4; }
