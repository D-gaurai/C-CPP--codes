#include<stdio.h>
#include<string.h>
int main(){
    struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        //S,A,B,C,D
        char name[15];
    }pokemon;

    pokemon arr[3];
    arr[0].attack=50;
    arr[0].hp=69;
    arr[0].speed = 50;
    arr[0].tier='a';
    strcpy(arr[0].name,"charizard");

    arr[1].attack=40;
    arr[1].hp=65;
    arr[1].speed = 60;
    arr[1].tier='b';
    strcpy(arr[1].name,"mewtwo");

    arr[2].attack=500;
    arr[2].hp=699;
    arr[2].speed = 540;
    arr[2].tier='c';
    strcpy(arr[2].name,"pikachu");

    for(int i=0;i<3;i++){
        printf("%s\n",arr[i].name);
    }


    return 0;
}