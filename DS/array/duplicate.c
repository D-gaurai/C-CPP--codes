/*#include<stdio.h>
int main(){
    int arr[7] = {1,2,3,4,7,5,7};
    for(int i=0;i<=6;i++){
        for(int j=i+1;j<=6;j++){
            if(arr[i]==arr[j]){
                printf("%d is the duplicate element", arr[i]);
                break;
            }
        }
    }
    return 0;

    }*/


#include<stdio.h>
#include<stdlib.h>
int compare(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
}
void duplicate(int arr[], int n){
    qsort(arr, n, sizeof(int), compare);
    int found=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            printf("%d is the duplicate element \n", arr[i] );
            found=1;
            while(i<n-1 && arr[i]==arr[i+1]){
                i++;
            }
        }
    }
    if(!found){
        printf("No duplicate elements found.");
    }
    printf("\n");
}
int main(){
    int arr[] = {1,2,3,5,4,7,5,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    duplicate(arr,n);
    return 0;
}