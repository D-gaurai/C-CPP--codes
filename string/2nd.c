/*#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "deep is best";
//printf("%s",str);
puts(str);
return 0;
}*/

#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    //scanf("%s",str);//only the first word will be considered
    gets(str); //entire input can be taken
    printf("your input was : %s",str);
    return 0;
}