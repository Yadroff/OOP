#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <vector>
#include "point.h"

using namespace std;

class Rectangle {
public:
    Rectangle();

    Rectangle(vector<Point>);

    Rectangle(const Rectangle& other);

    virtual ~Rectangle();

    friend istream &operator>>(istream &is, Rectangle &obj); // перегруженный оператор >>

    friend ostream &operator<<(ostream &os, const Rectangle &obj);

    Rectangle &operator++();

    friend Rectangle operator+(const Rectangle &left, const Rectangle &right);

    Rectangle &operator=(const Rectangle &right);

    size_t VertexNumbers();

    double Area();

private:
    Point a, b, c, d; // a - левая нижняя вершина, b - левая верхняя, с - правая верхняя, d - правая нижняя
};


#endif
