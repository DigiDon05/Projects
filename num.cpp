#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;

  std::cout << "How many numbers? ";
  std::cin >> n;

  vector<int> arr(n); // correct dynamic size array

  std::cout << "Enter " << n << " numbers:\n";
  for (int i = 0; i < n; i++) {
    std::cin >> arr[i];
  }

  int smallest = arr[0];
  int largest = arr[0];

  for (int i = 1; i < n; i++) {
    if (arr[i] < smallest)
      smallest = arr[i];

    if (arr[i] > largest)
      largest = arr[i];
  }

  std::cout << "Smallest number = " << smallest << endl;
  std::cout << "Largest number  = " << largest << endl;

  return 0;
}
