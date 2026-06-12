#include<stdio.h>
int main(){
    struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;//S,A,B,C,D
    };
    struct pokemon pikachu;
    printf("enter attack of pikachu :");
    scanf(" %d",&pikachu.attack);
    pikachu.hp = 50;
    pikachu.speed = 100;
    pikachu.tier = 'A';


    struct pokemon charizard;
    charizard.attack = 130;
    charizard.hp = 80;
    charizard.speed =80;
    charizard.tier = 's';

    struct pokemon mewtwo;
    mewtwo.attack = 130;
    mewtwo.hp = 805;
    mewtwo.speed = 800;
    mewtwo.tier = 'G';

    printf(" pikachu attack is = %d",pikachu.attack);

    return 0;
}