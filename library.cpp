#include <iostream>
#include <string>
using namespace std;

class Library {
    string name, userType;
    int returnDays;

public:
    void getData() {
        cout << "\nEnter Name: ";
        cin >> name;

        cout << "Enter User Type (Faculty/Student): ";
        cin >> userType;

        cout << "Enter Number of Days Taken: ";
        cin >> returnDays;
    }

    void calculateFine() {
        int allowedDays = 0;
        int fine = 0;

        if(userType == "Faculty" || userType == "faculty")
            allowedDays = 30;
        else if(userType == "Student" || userType == "student")
            allowedDays = 10;
        else {
            cout << "Invalid User Type!\n";
            return;
        }

        if(returnDays > allowedDays) {
            int extraDays = returnDays - allowedDays;
            fine = extraDays * 100;
        }

        cout << "\n------ Return Summary ------\n";
        cout << "Name: " << name << endl;
        cout << "User Type: " << userType << endl;
        cout << "Allowed Days: " << allowedDays << endl;
        cout << "Days Taken: " << returnDays << endl;

        if(fine > 0)
            cout << "Fine to Pay: ₹" << fine << endl;
        else
            cout << "No Fine. Returned on Time ✅" << endl;
    }
};

int main() {

    const int n = 3;      // 3 users
    Library users[n];     // Array of objects

    for(int i = 0; i < n; i++) {
        cout << "\n===== User " << i+1 << " =====\n";
        users[i].getData();
    }

    cout << "\n\n===== Final Report =====\n";

    for(int i = 0; i < n; i++) {
        users[i].calculateFine();
    }

    return 0;
}
