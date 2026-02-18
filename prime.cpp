#include <iostream>
using namespace std;

class Prime {
private:
  int n;

public:
  void getNumber() {
    std::cout << "Enter a number: ";
    std::cin >> n;
  }

  void checkPrime() {
    int i;
    bool isPrime = true;

    if (n <= 1) {
      isPrime = false;
    } else {
      for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
          isPrime = false;
          break;
        }
      }
    }

    if (isPrime)
      std::cout << "Prime number";
    else
      std::cout << "Not a prime number";
  }
};

int main() {
  Prime obj;
  obj.getNumber();
  obj.checkPrime();

  return 0;
}
