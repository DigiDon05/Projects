#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Constructor Called\n";
    }
    ~Demo() {
        cout << "Destructor Called\n";
    }
};

void test() {
    static Demo obj;  // Static object
}

int main() {
    test();
    test();
    test();
    return 0;
}
