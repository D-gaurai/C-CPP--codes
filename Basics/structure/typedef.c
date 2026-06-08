/*#include<stdio.h>
typedef float realnumber;
typedef int integer;
int main(){
    integer x =5;
    realnumber y = 3.4453;
    printf("%d",x);
    return 0;
}*/

#include<stdio.h>
#include<string.h>
int main(){
    typedef struct book{
        int page;
        float price;
        char name[50];
    }book;


    book A;
    book B;
    book C;
    book D;


    A.page = 2000;
    A.price = 4567.3;
    strcpy(A.name,"secret seven");

    printf("%d\n",A.page);
     printf("%f\n",A.price);
      printf("%s\n",A.name);

      return 0;

}