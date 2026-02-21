#include <iostream>
using namespace std;

int main() {

  int n = 5;

  int *arr = new int[n]; // Dynamic array

  for (int i = 0; i < n; i++) {
    arr[i] = i + 1;
  }

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  delete[] arr; // Freeing array memory

  return 0;
}
