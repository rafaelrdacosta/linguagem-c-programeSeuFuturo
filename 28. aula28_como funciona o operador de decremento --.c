#include<stdio.h>

/*Aula 28
    Operador de decremento --*/

int main(){

    int resultado, contador = 10;

    printf("Valor: %d\n", contador--);
    printf("Valor: %d\n", contador);
    printf("Valor: %d\n", --contador);

    resultado = contador--;
    printf("Valor: %d\n", resultado);
    //neste momento contador vale 7
    resultado = --contador;
    printf("Valor: %d\n", resultado);

    return 0;
}
