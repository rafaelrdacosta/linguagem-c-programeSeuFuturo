#include<stdio.h>

/*Aula 95
Voc� deve fazer um programa que apresente a sequ�ncia conforme o exemplo abaixo.
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
    for(int i = 1; i <= 15; i++){
        for(int j = 1; j <= i; j++)
            printf("I = %d - J = %d\n", i, j);
        putchar('\n');
    }
    return 0;
}
