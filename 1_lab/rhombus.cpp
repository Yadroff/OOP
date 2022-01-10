#include "rhombus.h"

Rhombus::Rhombus() : a(), b(), c(), d() {
  cout << "Default Rhombus was created" << endl;
}

Rhombus::Rhombus(vector<Point> v) : a(v[0]), b(v[1]), c(v[2]), d(v[3]) {
  cout << "Rhombus with vertices " << a << ", " << b << ", " << c << ", " << d
       << " was created" << endl;
}

Rhombus::Rhombus(istream &is) {
  cout << "Enter lower coordinate" << endl;
  cin >> a;
  cout << "Enter left coordinate" << endl;
  cin >> b;
  cout << "Enter upper coordinate" << endl;
  cin >> c;
  cout << "Enter right coordinate" << endl;
  cin >> d;
  cout << "Rhombus was created via stream" << endl;
}

Rhombus::Rhombus(const Rhombus &other)
    : a(other.a), b(other.b), c(other.c), d(other.d) {
  cout << "Made copy of rhombus" << endl;
}

void Rhombus::Print(ostream &os) {
  cout << "Rhombus:" << a << b << c << d << endl;
}

double Rhombus::Area() { return 0.5 * a.dist(c) * b.dist(d); }

size_t Rhombus::VertexesNumber() { return 4; }

Rhombus::~Rhombus() { cout << "Rhombus was deleted" << endl; }
