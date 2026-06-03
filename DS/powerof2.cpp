#include<iostream>
using namespace std;
bool isPowerOfTwo(int n) {
    if(n <1){
        return false;
    }
    while(n!=1){
        if(n%2 != 0){
            return false;
        }
        n /= 2;
    }
    return true;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(isPowerOfTwo(n)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    return 0;
}