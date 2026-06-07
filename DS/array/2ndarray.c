/*#include<stdio.h>
int main(){
    int arr[5] = {2,4,6,8};
    int i;
    for(i=0;i<=4;i++){
        printf("%d",arr[i]);
    }
    return 0;

}*/

//fill array by input
#include <stdio.h>
int main(){
    int arr[5];
    for(int i = 0;i<=4;i++){
        
        printf("enter the element number %d\n",i);
    scanf("%d" , &arr[i]);
}
printf("the third element in the array is %d\n",arr[3]);
return 0;
}