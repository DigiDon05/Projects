#include <iostream>
using namespace std;

class Sum {
private:
  int a, b;

public:
  void getData() {
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
  }

  void displaySum() { std::cout << "Sum = " << a + b; }
};

int main() {
  Sum obj;
  obj.getData();
  obj.displaySum();

  return 0;
}
