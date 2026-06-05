#include<stdio.h>
#include<string.h>
int main(){
    struct book{
        int page;
        float price;
        char name[50];
    }A,B,C;

    A.page = 2000;
    A.price = 4567.3;
    strcpy(A.name,"secret seven");

    printf("%d\n",A.page);
     printf("%f\n",A.price);
      printf("%s\n",A.name);

      return 0;

}