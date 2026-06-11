//count vowel in a string
#include <iostream> 
#include <string>
using namespace std;
int main() {
    string str = "hello this is a string program code";
    int vowelCount = 0;

    for (char c : str) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            vowelCount++;
        }
    }

    cout << "Number of vowels in the string: " << vowelCount << endl;
    return 0;
}