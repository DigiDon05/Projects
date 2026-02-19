#include <iostream>
#include <cstring>
using namespace std;

int main() {

    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[50];

    // 1. strlen()
    cout << "Length of str1: " << strlen(str1) << endl;

    // 2. strcpy()
    strcpy(str3, str1);
    cout << "After strcpy, str3: " << str3 << endl;

    // 3. strcat()
    strcat(str1, str2);
    cout << "After strcat, str1: " << str1 << endl;

    // 4. strcmp()
    int result = strcmp(str1, str2);
    if(result == 0)
        cout << "Strings are equal" << endl;
    else
        cout << "Strings are not equal" << endl;

    // 5. strrev()
    cout << "Reverse of str2: " << strrev(str2) << endl;

    // 6. strupr()
    cout << "Uppercase str2: " << strupr(str2) << endl;

    // 7. strlwr()
    cout << "Lowercase str2: " << strlwr(str2) << endl;

    return 0;
}
