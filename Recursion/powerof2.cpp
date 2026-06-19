//power of 2 using recursion
#include<iostream>
using namespace std;
int powerOf2(int N){
    //base case
    if(N==0){
        return 1;
    }
    return 2*powerOf2(N-1);
}
int main(){
    int N;
    cout<<"Enter the value of N: ";
    cin>>N;
    if(N<0){
        cout<<"Power of 2 is not defined for negative numbers."<<endl;
        return 0;
    }
    cout<<"2 raised to the power "<<N<<" is : "<<powerOf2(N)<<endl;
    return 0;
}
