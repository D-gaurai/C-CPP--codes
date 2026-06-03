#include<iostream>
using namespace std;
int main(){
int a[10]={6,2,19,21,5,4};
int i,j,temp;
for(i=0;i<6;i++){
    for(j=0;j<5;j++){
        if(a[j]>a[j+1])
        {
            temp=a[j+1];
            a[j+1]=a[j];
            a[j]=temp;
        }
    }
}
cout<<"after sorting:"<<endl;
for(int i=0;i<6;i++){
    cout<<a[i]<<endl;
    
}
return 0;
}