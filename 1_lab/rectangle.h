#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "figure.h"

using namespace std;

class Rectangle : public Figure {
public:
  Rectangle();

  Rectangle(vector<Point> v);

  Rectangle(istream &is);

  Rectangle(const Rectangle &other);

  virtual ~Rectangle();

  void Print(ostream &os);

  size_t VertexesNumber();

  double Area() override;

private:
  Point a, b, c, d; // a - левая нижняя вершина, b - левая верхняя, с - правая
                    // верхняя, d - правая нижняя
};

#endif
