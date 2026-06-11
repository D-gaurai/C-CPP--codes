//largest word in a string
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "hello this is a string program code";
    string largestWord = "";
    string currentWord = "";

    for (int i = 0; i <= str.length(); i++) {
        if (str[i] == ' ' || i == str.length()) {
            if (currentWord.length() > largestWord.length()) {
                largestWord = currentWord;
            }
            currentWord = "";
        } else {
            currentWord += str[i];
        }
    }

    cout << "Largest word: " << largestWord << endl;
    return 0;
}