#ifndef POINT_H
#define POINT_H

#include <iostream>

class Point {
public:
  Point();

  Point(std::istream &is);

  Point(double x, double y);

  double dist(Point &other);

  friend std::istream &operator>>(std::istream &is, Point &p);

  friend std::ostream &operator<<(std::ostream &os, Point &p);

  friend class Rectangle; // Дружественные классы, чтобы были доступны
                          // координаты точки

  friend class Trapezoid;

  friend class Rhombus;

private:
  double x_;
  double y_;
};

#endif // POINT_H
