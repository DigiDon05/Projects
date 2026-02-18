#include <iostream>
using namespace std;

class Number {
  int x;

public:
  Number(int a) { x = a; }

  void operator-() { x = x + 10; }

  void display() { cout << "x is :  " << x; }
};

int main() {
  Number n(5);
  -n;
  n.display();
}
