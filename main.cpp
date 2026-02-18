#include <iostream>
#include <ostream>

int main() {
  int n, flag = 1;
  std::cout << "Enter the Number: " << std::endl;
  std::cin >> n;
  for (int i = 2; i <= n; i++) {
    for (int j = 2; j <= i / 2; j++) {
      if (i % j == 0) {
        flag = 0;
        break;
      }
      flag++;
    }
    if (flag != 0) {
      std::cout << i << " ";
    }
  }
  return 0;
}
