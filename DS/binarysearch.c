#include<stdio.h>
int main(){
int a[20] ={2,4,7,9,17,19,27,36,71,77,82,85,91,95};
int l=0,r=13,search,m;
int found=0;

printf("enter the number you want to search:");
scanf("%d",&search);

while(l<=r){
    m=(l+r)/2;
    if(a[m]==search){
        printf("number is found at this position %d",m+1);
        found=1;
        break;
    }
    else if (a[m]>search){
        r=m-1;
    }
    else {
        l=m+1;
    }
}
if(found==0){
    printf("number is not found");
}
return 0;

}