//basic code native approach  not included all the edge cases
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
int main(){
    int arr[]={1,2,3,4,7,5,7,7};
int n=sizeof(arr)/sizeof(arr[0]);
printf("Duplicate elements are:\n");
for(int i=0;i<n;i++){
int duplicate=0;
for(int k=0;k<i;k++){
if(arr[i]==arr[k]){
duplicates=1;
break;}
}
if(duplicate){
continue;}
for(int j=i+1;j<n;j++){
if(arr[i]==arr[j]){
printf("%d is a duplicate element\n",arr[i]);
break;}
}
}
return 0;}

    
