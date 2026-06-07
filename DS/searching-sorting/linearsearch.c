#include<stdio.h>
void main(){
    int i,a[100],search;
    int k=0,r;


    printf("enter a range:");
    scanf("%d",&r);
    printf("enter %d numbers:",r);
    for(i=0;i<r;i++){
        scanf("%d",&a[i]);
    }
    printf("enter a number that you want to search:");
    scanf("%d",&search);
    for(i=0;i<r;i++){
        if(a[i]==search)
        {
            printf("number is found at position %d",i+1);
            k++;
            break;
        }
    }
    if(k==0){
        printf("number is not found");
    }
    return 0;
}