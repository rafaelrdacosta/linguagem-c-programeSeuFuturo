#include<stdio.h>

/*Aula 95
Você deve fazer um programa que apresente a sequência conforme o exemplo abaixo.
I=1 J=7
I=1 J=6
I=1 J=5
I=3 J=9
I=3 J=8
I=3 J=7
I=5 J=11
I=5 J=10
I=5 J=9
...
I=9 J=15
I=9 J=14
I=9 J=13

*/

int main(){
    for(int i = 1; i <= 9; i += 2){
        for(int j = 6; j >= 4; j--)
            printf("I = %d - J = %d\n", i, i + j);
        putchar('\n');
    }
    return 0;
}
