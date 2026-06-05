#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;//S,A,B,C,D
        char name[15];
    }pokemon;
    pokemon a,b,C;
    a.attack=100;
    a.hp=100;
    a.speed=90;
    a.tier='A';
    strcpy(a.name,"blastoise");
    b=a;
    b.attack=200;
    printf("%d",b.attack);

    return 0;
}