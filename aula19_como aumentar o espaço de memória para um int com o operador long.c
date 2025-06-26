#include<stdio.h>


/*Aula 19
    Operador long para o tipo Int
    %li / %ld*/

int main(){

    long long int x = 2147483647;

    printf("Tamanho de x em bytes: %d\n", sizeof x);

    printf("Valor de x: %lli\n", x);
    x++;
    printf("Valor de x: %lli\n", x);

    return 0;
}
