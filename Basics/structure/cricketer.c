#include<stdio.h>
#include<string.h>
int main(){
    typedef struct cricketer{
        char name[15];
        int age;
        int  noofmatches;
        float average;
    } cricketer;

    cricketer arr[3];
    for(int i=0;i<3;i++){
        scanf("%s",arr[i].name);
        scanf("%d",&arr[i].age);
        scanf("%d",&arr[i].noofmatches);
        scanf("%f",&arr[i].average);
    }
    for(int i=0;i<3;i++){
        printf("name : %s\n",arr[i].name);
        printf("age : %d\n",arr[i].age);
        printf("number of matches played : %d\n",arr[i].noofmatches);
        printf("average : %f\n",arr[i].average);
    }
    return 0;
}