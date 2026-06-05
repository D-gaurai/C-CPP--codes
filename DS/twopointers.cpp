/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={4,5,7,9,12,15};
    int st=0;
    int targ=21;
    int end=5;
    for(int i=0;i<6;i++){
        if(arr[st]+arr[end]==targ){
            cout<<"The pair is: "<<arr[st]<<" "<<arr[end];
            break;
        }
        else if(arr[st]+arr[end]>targ){
            end--;
        }
        else{
            st++;
        }
    }
}*/
/*#include<bits/stdc++.h>
using namespace std;
int arr[]={0,1,0,1,1,0,0};
int st=0;
int end=6;
int main(){
for(int i=0;i<6;i++){
    if(arr[st]==arr[end]){
        st++;
        end--;
    }
    else if(arr[st]>arr[end]){
        swap(arr[st],arr[end]);
        st++;
        end--;
    }
    else{
        swap(arr[st],arr[end]);
        st++;
        end--;
    }}
    for(int i=0;i<6;i++){
        cout<<"the final array is:"<<arr[i]<<endl;
    }
    return 0;

}*/
/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={0,1,0,1,1,0,0};
    int st=0;
    int end=6;
    
    while(st<end){
        if(arr[st]==0){
            st++;
        }
        else if(arr[end]==1){
            end--;
        }
        else{
            swap(arr[st],arr[end]);
            st++;
            end--;
        }
    }
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={0,1,0,0,3,12};
    for(int i=0;i<6;i++){
        if(arr[i]==0){
 for(int j=i+1;j<6;j++){
     if(arr[j]!=0){
   swap(arr[i],arr[j]);
 break;  }
  }
 }

}
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={4,5,6,8,9,11,15,17};
    sort(arr,arr+8);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    size_t n=sizeof(arr)/sizeof(arr[0]);
    int target=17;
    int st=0;
    int end=7;
    while(st<end){
        if(arr[st] +arr[end]==target){
            
            break;
        }
        else if(arr[st]+arr[end]>target){
            end--;
        }
        else{
            st++;
        }
    }
                cout<<"the numbers are :"<<arr[st]<<" , "<<arr[end]<<endl;
}