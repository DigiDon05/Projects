#include <iostream>
using namespace std;

class shape {
  int l, b, r, s;

public:
  shape() {
    l = 10;
    b = 20;
    r = 5;
    s = 8;
  }

  // Circle
  float area(int radius) {
    r = radius;
    return 3.14 * r * r;
  }

  // Rectangle
  int one(int len, int bred) {
    l = len;
    b = bred;
    return l * b;
  }

  // Square
  void area(float side) {
    s = side;
    cout << "Area of square = " << s * s << endl;
  }
};

int main() {
  shape s;

  cout << "Area of circle = " << s.area(7) << endl;
  cout << "Area of rectangle = " << s.one(10, 30) << endl;

  s.area(3.5f);

  return 0;
}
