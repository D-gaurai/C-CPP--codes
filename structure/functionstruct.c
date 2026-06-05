#include<stdio.h>
#include<string.h>
#include<stdbool.h>
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon ;
    void fun(pokemon p){
        printf("%d",p.hp);
        return;
    }int main(){
        pokemon pikachu;
        pikachu.hp =60;
        fun(pikachu);
        return 0;
    }

    
