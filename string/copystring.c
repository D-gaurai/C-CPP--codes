#include<stdio.h>
#include<string.h>
int main(){
    char s1[] = "deepanshu";
    char*s2 = s1;
    s1[0] = 's';
    printf("%s",s2);
    return 0;

}