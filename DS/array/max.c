#include<stdio.h>
/*int main(){
    int arr[7] ={-10,-4,-200,-80,-19,-5,-12};
    int max = arr[0];
    for(int i=0;i<=6;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    printf("%d",max);
    return 0;
}*/
#include<stdio.h>
int main(){
    int i;
    int arr[7] = {1,2,67,798,34,2,56};
    int max =arr[0];
    for(i=0;i<=6;i++){
        if(max<arr[i]){
        max=arr[i];
    }
}
printf("%d",max);
return 0;
}