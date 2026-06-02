#include<stdio.h>
    int main(){
        int arr[7] = {1,2,56,76,45,78,89};
        int x =45;
        int check =0;
        for(int i=0;i<=6;i++){
            if(arr[i] == x){
            printf("%d is present in the array and its index is %d",x,i);
            break;
        }
    }

return 0;
    }

    // if the number is not present in an array


    /*#include<stdio.h>
    int main(){
        int arr[7] = {1,2,56,76,45,78,89};
        int x =45;
        int check =0;
        for(int i=0;i<=6;i++){
            if(arr[i] == x){
           check = 1;
            break;
        }
    }
    if(check ==0){
        printf("%d is not present in the array",x);
    }
    else{
        printf("%d is present in the array",x   )
    }

return 0;
    }*/

// using bool data type

#include<stdio.h>
#include<stdbool.h>
    int main(){
        int arr[7] = {1,2,56,76,45,78,89};
        int x =34;
        int idx = -1;
        bool flag=false;
        int check =0;
        for(int i=0;i<=6;i++){
            if(arr[i] == x){
           flag = true;
           idx = i;
            break;
        }
    }
    if(flag ==false){
        printf("%d is not present in the array",x);
    }
    else{
        printf("%d is present in the array and its index is %d",x,idx);
    }

return 0;
    }