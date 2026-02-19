#include <iostream>
using namespace std;

void showCount() {
    static int count = 0;   // Static variable
    count++;
    cout << "Count: " << count << endl;
}

int main() {
    showCount();
    showCount();
    showCount();
    return 0;
}