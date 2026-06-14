//print even number using recursion
/*#include<iostream>
using namespace std;
void printEven(int N){
    //base case
    if(N==0){
        return;
    }
    printEven(N-1);
    if(N%2==0){
        cout<<N<<endl;
    }
}
int main(){
    int N;
    cout<<"Enter the value of N: ";
    cin>>N;
    printEven(N);
    return 0;
}*/

//print odd number using recursion
#include<iostream>
using namespace std;
void printOdd(int N){
    //base case
    if(N==0){
        return;
    }
    printOdd(N-1);
    if(N%2!=0){
        cout<<N<<endl;
    }
}
int main(){
    int N;
    cout<<"Enter the value of N: ";
    cin>>N;
    printOdd(N);
    return 0;
}
