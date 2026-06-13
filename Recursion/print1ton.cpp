//using two arguments in recursion
/*#include<iostream>
using namespace std;
void print(int num,int N){
    //base case
    if(num==N){
        cout<<num<<endl;
        return;
    }
    cout<<num<<endl;
    print(num+1,N);
}
int main(){
    int N;
    cout<<"Enter the value of N: ";
    cin>>N;
    print(1,N);
    return 0;
}*/


//using one argument in recursion
/*#include<iostream>
using namespace std;
void print(int N){
    //base case
    if(N==0){
        return;
    }
    print(N-1);
    cout<<N<<endl;
}
int main(){
    int N;
    cout<<"Enter the value of N: ";
    cin>>N;
    print(N);
    return 0;
}*/