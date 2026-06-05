#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7]= {7,6,5,4,3,2,1};
    int max = INT_MIN;
    int smax = INT_MIN;
    int n = sizeof(arr)/sizeof(arr[0]); 
    for(int i=0;i<n;i++){
        if(max<arr[i]){
        smax = max;
        max = arr[i];
    }
    else if(smax<arr[i] && max!=arr[i]){
        smax = arr[i];
    }
}
    if(smax==INT_MIN){
        printf("no second largest element exist");}
    else{
printf("%d",smax);}
return 0;
}
