#include <iostream>
using namespace std;

class Student {
private:
  int marks[5];
  int total;
  float average;

public:
  // Function 1 → Input marks
  void input() {
    cout << "Enter marks of 5 subjects:\n";
    for (int i = 0; i < 5; i++) {
      cin >> marks[i];
    }
  }

  // Function 2 → Calculate total & average
  void calculate() {
    total = 0;

    for (int i = 0; i < 5; i++) {
      total += marks[i];
    }

    average = total / 5.0;
  }

  // Function 3 → Display result
  void display() {
    cout << "\nTotal Marks = " << total << endl;
    cout << "Average Marks = " << average << endl;
  }
};

int main() {

  Student s; // object

  s.input();
  s.calculate();
  s.display();

  return 0;
}
