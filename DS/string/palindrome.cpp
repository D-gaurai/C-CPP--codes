//palindrome 
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "racecar";
    cout << "Original string: " << str << endl;

    // Check if the string is a palindrome
    int n = str.length();
    bool isPalindrome = true;
    for (int i = 0; i < n / 2; i++) {
        if (str[i] != str[n - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}