#include <iostream>
using namespace std;

class COMPLEX {
  int real, imag;

public:
  COMPLEX(int r = 0, int i = 0) {
    real = r;
    imag = i;
  }

  COMPLEX operator+(COMPLEX const &obj) {
    COMPLEX temp;

    temp.real = real + obj.real;
    temp.imag = imag + obj.imag;

    return temp;
  }

  void display() { cout << real << " + " << imag << "i" << endl; }
};

int main() {
  COMPLEX c1(3, 4);
  COMPLEX c2(2, 5);

  COMPLEX C3;

  C3 = c1 + c2;

  cout << "First Complex Number : ";
  c1.display();

  cout << "Second Complex Number: ";
  c2.display();

  cout << "Sum = ";
  C3.display();

  return 0;
}
