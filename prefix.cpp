#include <iostream>
using namespace std;

class Numbers {
private:
  int n1, n2;

public:
  Numbers(int x = 0, int y = 0) {
    n1 = x;
    n2 = y;
  }
  void operator++() {
    ++n1;
    ++n2;
  }
  void display() {
    cout << "n1 = " << n1 << endl;
    cout << "n2 = " << n2 << endl;
  }
};

int main() {
  int x, y;

  cout << "Enter two integers: ";
  cin >> x >> y;

  Numbers obj(x, y);

  cout << "\nBefore increment:\n";
  obj.display();

  ++obj;

  cout << "\nAfter prefix ++ increment:\n";
  obj.display();

  return 0;
}
