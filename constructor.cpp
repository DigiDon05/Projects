#include <iostream>
using namespace std;

class Add {
private:
  int a, b;

public:
  // Default Constructor
  Add() {
    a = 0;
    b = 0;
    cout << "Default Constructor called\n";
  }

  // Parameterized Constructor
  Add(int x, int y) {
    a = x;
    b = y;
    cout << "Parameterized Constructor called\n";
  }

  // Copy Constructor
  Add(const Add &obj) {
    a = obj.a;
    b = obj.b;
    cout << "Copy Constructor called\n";
  }

  // Function to take input
  void input() {
    cout << "Enter two numbers: ";
    cin >> a >> b;
  }

  // Function to display sum
  void showSum() { cout << "Sum = " << a + b << endl; }
};

int main() {

  // Default constructor + user input
  Add obj1;
  obj1.input();
  obj1.showSum();

  int x, y;

  // User input for parameterized constructor
  cout << "\nEnter two numbers for parameterized constructor: ";
  cin >> x >> y;

  Add obj2(x, y);
  obj2.showSum();

  // Copy constructor
  Add obj3 = obj2;
  obj3.showSum();

  return 0;
}
