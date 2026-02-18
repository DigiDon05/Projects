#include <iostream>
using namespace std;

class STUDENT {
private:
  string name;
  int marks[5];
  int total;
  int maxMarks;

public:
  void assign() {
    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Maximum Marks: ";
    cin >> maxMarks;

    total = 0;

    cout << "Enter marks of 5 subjects:\n";
    for (int i = 0; i < 5; i++) {
      cout << "Subject " << i + 1 << ": ";
      cin >> marks[i];
    }
  }

  void compute() {
    total = 0;
    for (int i = 0; i < 5; i++)
      total += marks[i];
  }

  void display() {
    cout << "\n----- STUDENT REPORT -----\n";
    cout << "Name       : " << name << endl;
    cout << "Total      : " << total << endl;
    cout << "Max Marks  : " << maxMarks << endl;
    cout << "Percentage : " << (float)total / maxMarks * 100 << "%\n";
  }
};

int main() {
  STUDENT s;

  s.assign();
  s.compute();
  s.display();

  return 0;
}
