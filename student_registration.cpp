#include <iostream>
using namespace std;

class faculty {
private:
  char name[25];
  char department[25];
  int age;
  int salary;

public:
  // Constructor
  faculty() {
    name[0] = '\0';
    department[0] = '\0';
    age = 0;
    salary = 0;
  }

  void input() {
    cout << "Enter the name : ";
    cin >> name;

    cout << "Enter the department : ";
    cin >> department;

    cout << "Enter the age : ";
    cin >> age;

    cout << "Enter the salary : ";
    cin >> salary;
  }

  void update() {
    cout << "Enter your new department : ";
    cin >> department;
  }

  void salInc() {
    int new_salary;
    new_salary = salary + (salary * 10) / 100;
    salary = new_salary;
  }

  void display() {
    cout << "Name : " << name << endl;
    cout << "Age : " << age << endl;
    cout << "Department : " << department << endl;
    cout << "Salary : " << salary << endl;
  }
}; // 👈 class ends HERE (IMPORTANT)

int main() {
  faculty f1;
  f1.input();
  f1.display();

  faculty f2;
  f2.input();
  f2.update();
  f2.salInc();
  f2.display();

  return 0;
}
