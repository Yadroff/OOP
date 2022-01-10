#ifndef INC_1_LAB_TRAPEZOID_H
#define INC_1_LAB_TRAPEZOID_H

#include "figure.h"

using namespace std;

class Trapezoid : public Figure {
public:
  Trapezoid();

  Trapezoid(istream &is);

  Trapezoid(const Trapezoid &other);

  Trapezoid(vector<Point>);

  virtual ~Trapezoid();

  void Print(ostream &os);

  size_t VertexesNumber();

  double Area();

private:
  Point a, b, c, d; // a - левая нижняя, b - левая верхняя, с - правая верхняя,
                    // d - правая нижняя
};

#endif
