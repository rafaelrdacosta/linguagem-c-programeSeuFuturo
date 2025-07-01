#include<stdio.h>

/*Aula 66: Incremento diferente de 1*/

int main(){

    for(int i = 1; i < 100; i += 2)
        printf("%d ", i);

    printf("\n\n");

    for(int i = 5; i < 100; i += 5)
        printf("%d ", i);

    printf("\n\n");

    return 0;
}
