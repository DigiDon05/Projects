#include <iostream>
using namespace std;

class Student {
  int roll;
  string name;

public:
  // Constructor to predefine values
  Student(int r, string n) {
    roll = r;
    name = n;
  }

  void display() {
    cout << "Roll No: " << roll << endl;
    cout << "Name: " << name << endl;
    cout << "-------------------\n";
  }
};

// Function to display array of objects
void showStudents(Student s[], int size) {
  for (int i = 0; i < size; i++) {
    s[i].display();
  }
}

int main() {

  Student s[3] = {Student(1500, "Subhranshu"), Student(1496, "Hardik"),
                  Student(1501, "Rahul")};

  showStudents(s, 3);

  return 0;
}
