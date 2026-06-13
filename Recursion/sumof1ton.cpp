//sum of nataural numbers from 1 to n
#include<iostream>
using namespace std;
int sum(int N){
    //base case
    if(N==0){
        return 0;
    }
    return N+sum(N-1);
}
int main(){
    int N;
    cout<<"Enter the value of N: ";
    cin>>N;
    if(N<0){
        cout<<"Sum is not defined for negative numbers."<<endl;
        return 0;
    }
    cout<<"Sum of first "<<N<<" natural numbers is : "<<sum(N)<<endl;
    return 0;
}