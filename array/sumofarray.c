/*#include <stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    int sum = 0;
    for(int i=0;i<=4;i++){
        sum = sum + arr[i];
    }
    printf("%d",sum);
    return 0;
}*/

//user input array
#include<stdio.h>
int main(){
    int n;
    printf("enter the size of array :");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1,i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n-1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}