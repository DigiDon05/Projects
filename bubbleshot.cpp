#include <algorithm> // for swap
#include <iostream>
using namespace std;

int main() {
  int n;

  std::cout << "Enter number of elements: ";
  std::cin >> n;

  int *arr = new int[n];

  std::cout << "Enter " << n << " numbers:\n";
  for (int i = 0; i < n; i++) {
    std::cin >> arr[i];
  }

  // Bubble Sort using swap
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
      }
    }
  }

  std::cout << "\nSorted array: ";
  for (int i = 0; i < n; i++) {
    std::cout << arr[i] << " ";
  }

  std::cout << "\nSmallest number = " << arr[0];
  std::cout << "\nLargest number = " << arr[n - 1];

  delete[] arr;
  return 0;
}
