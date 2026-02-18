#include <iostream>
#include <string>
using namespace std;

class faculty {
private:
  string name;
  string department;
  int age;
  int salary;

public:
  faculty() {
    cout << "\nEnter name: ";
    cin >> name;

    cout << "Enter department: ";
    cin >> department;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter salary: ";
    cin >> salary;
  }

  faculty(string n) {
    name = n;

    cout << "Enter department: ";
    cin >> department;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter salary: ";
    cin >> salary;
  }

  faculty(string n, string d, int a, int s) {
    name = n;
    department = d;
    age = a;
    salary = s;
  }

  void salInc() { salary = salary + (salary * 10) / 100; }

  void display() {
    cout << "\n----- Faculty Details -----";
    cout << "\nName: " << name;
    cout << "\nDepartment: " << department;
    cout << "\nAge: " << age;
    cout << "\nSalary: " << salary << endl;
  }
};

int main() {

  faculty f1;

  faculty f2("Rahul");

  faculty f3("Subhranshu", "CSE", 24, 150000);

  f3.salInc();

  f1.display();
  f2.display();
  f3.display();

  return 0;
}
