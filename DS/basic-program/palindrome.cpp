#include<iostream>
using namespace std;

bool isPalindrome(int x) {
    if(x < 0){
        return false;
    }
    int original = x, reversed = 0, rem;
    while(x > 0){
        rem = x % 10;
        reversed = reversed * 10 + rem;
        x /= 10;
    }
    return original == reversed;
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(isPalindrome(num)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    return 0;
}