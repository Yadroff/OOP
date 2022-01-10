#include "rectangle.h"
#include "rhombus.h"
#include "trapezoid.h"

using namespace std;

int main() {
  Rectangle Rec1; // создаем дефолтный прямоугольник
  Point a(0, 0); // создаем вершины для следующего прямоугольника, а затем
                 // вектор из вершин
  Point b(0, 1);
  Point c(1, 1);
  Point d(1, 0);
  vector<Point> v{a, b, c, d}; //
  Rectangle Rec2(v); // создаем прямоугольник через вектор вершин
  Rectangle Rec3(cin); // создаем прямоугольник через стандартный ввод
  Rectangle Rec4(Rec3); // создаем копию
  Rec1.Print(cout); // выводим первый прямоугольник
  cout << Rec1.VertexesNumber() << endl; // количество вершин прямоугольника
  cout << "Rectangle area is " << Rec2.Area()
       << endl; // вывод площади прямоугольника
  Figure *f = new Rectangle(Rec2); // указатель класса фигуры на прямоугольник
  delete f; // освобождаем память указателя
  Rhombus Rh1;
  Rhombus Rh2(v);
  Rhombus Rh3(cin);
  Rhombus Rh4(Rh1);
  Rh2.Print(cout);
  cout << "Rhombus area is " << Rh2.Area() << endl;
  cout << Rh3.VertexesNumber() << endl;
  f = new Rhombus(Rh3);
  delete f;
  Trapezoid Tr1;
  Point tr1 = a, tr2 = b, tr3(2, 1), tr4(3, 0);
  vector<Point> tr{tr1, tr2, tr3, tr4};
  Trapezoid Tr2(tr);
  Trapezoid Tr3(cin);
  Trapezoid Tr4(Tr1);
  cout << "Trapezoid area is " << Tr2.Area() << endl;
  Tr3.Print(cout);
  cout << Tr4.VertexesNumber() << endl;
  f = new Trapezoid(Tr4);
  delete f;
  return 0;
}
