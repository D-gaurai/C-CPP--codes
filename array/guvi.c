/*#include<stdio.h>
int main(){
    int N,M;
    scanf("%d %d",&N,&M);
    printf("%d",M+N);
    return 0;
}*/

//maxmimum of two number:

/*#include <stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>b)
    printf("%d",a);
else
printf("%d",b);
return 0;
}*/

//odd or even sum:

/*#include<stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int add=n+m;
    if(add%2==0)
    printf("even");
else
printf("odd");
return 0;

}*/

//leap year check:
/*#include<stdio.h>
int main(){
    int year;
    scanf("%d",&year);
    if(year%4==0)
    printf("yes");
else if(year%100==0)
printf("yes");
else
printf("no");
return 0;
}*/

//grade system
/*#include<stdio.h>
int main(){
    int marks;
    scanf("%d",&marks);
    if(marks>=90)
    printf("A");
else if(marks>=75)
printf("B");
else if(marks>=50)
printf("c");
else
printf("fail");
return 0;
}*/

//print multiplication table
/*#include <stdio.h>
int main(){
    int n;
    int i,table;
    scanf("%d\n",&n);
    for(i=1;i<11;i++){
        table = n*i;
        printf("%d\n",table);
    }
    return 0;

}*/

//factorial

/*#include<stdio.h>
int main(){
    int n;
    int fact,i;
    fact =1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact *=i;
    }
    printf("%11d\n",fact);
    return 0;
}*/
