#include<stdio.h>
int main(){
    int N;
    int i;
    int max_element;
    int arr[100];
    scanf("%d",&N);

    for(i=0;i<N;i++){
        scanf("%d",arr[i]);
    }
    max_element=arr[0];

    for(i=0;i<N;i++){
        if(max_element<arr[i]){
        max_element=arr[i];
    }
}
printf("%d\n",max_element);
return 0;
}