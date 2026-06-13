//reverse a string
#include <iostream>
#include <string>
using namespace std;

//simple code to reverse a string
int main() {
    string str = "Hello, World!";
    cout << "Original string: " << str << endl;

    // Reverse the string
    int n = str.length();
    for (int i = 0; i < n / 2; i++) {
        swap(str[i], str[n - i - 1]);
    }

    cout << "Reversed string: " << str << endl;

    return 0;
}