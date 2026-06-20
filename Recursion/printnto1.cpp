//printing number from n to 1 using recursion

#include<iostream>
using namespace std;
void print(int N){
    //base case
    if(N==0){
        return;
    }
    cout<<N<<endl;
    print(N-1);
}
int main(){
    int N;
    cout<<"Enter the value of N: ";
    cin>>N;
    print(N);
    return 0;
}
