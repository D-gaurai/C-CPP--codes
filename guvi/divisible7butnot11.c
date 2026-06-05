#include<stdio.h>
int main(){
    int n;
    printf("enter the number n:");
    scanf("%d",&n);
    if(n%7==0 && n % 11 !=0){
    printf("yes");
}
else {
    printf("no");
}
return 0;

}