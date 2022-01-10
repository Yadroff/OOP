#ifndef FIGURE_H
#define FIGURE_H

#include "point.h"
#include <cstddef>
#include <iostream>
#include <vector>

class Figure {
public:
  virtual ~Figure(){};

  virtual void Print(std::ostream &os) = 0;

  virtual double Area() = 0;

  virtual size_t VertexesNumber() = 0;
};

#endif
