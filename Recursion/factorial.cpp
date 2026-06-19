//print factorial of a number using recursion
#include<iostream>
using namespace std;
int factorial(int N){
    //base case
    if(N==0){
        return 1;
    }
    return N*factorial(N-1);
}
int main(){
    int N;
    cout<<"Enter the value of N: ";
    cin>>N;
    if(N<0){
        cout<<"Factorial is not defined for negative numbers."<<endl;
        return 0;
    }
    cout<<"Factorial of "<<N<<" is : "<<factorial(N)<<endl;
    return 0;
}
