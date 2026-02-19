#include <iostream>
using namespace std;

class Student {
public:
    static int totalStudents;  // Static data member

    Student() {
        totalStudents++;
    }
};

int Student::totalStudents = 0;  // Definition outside class

int main() {
    Student s1;
    Student s2;
    Student s3;

    cout << "Total Students: " << Student::totalStudents << endl;

    return 0;
}
