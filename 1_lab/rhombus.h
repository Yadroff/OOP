#ifndef INC_1_LAB_RHOMBUS_H
#define INC_1_LAB_RHOMBUS_H

#include "figure.h"

using namespace std;

class Rhombus : public Figure {
public:
  Rhombus();

  Rhombus(vector<Point> v);

  Rhombus(istream &is);

  Rhombus(const Rhombus &other);

  double Area();

  virtual ~Rhombus();

  size_t VertexesNumber();

  void Print(ostream &os);

private:
  Point a, b, c, d;
};

#endif // INC_1_LAB_RHOMBUS_H
