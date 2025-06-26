#include<stdio.h>

/*Aula 29
    Operador unsigned
    trocar o %d por %u
    limite para o tipo inteiro: 2.147.483.647
    short int -> %d ou %hi
    unsigned short int -> %hu ou %d
    unsigned long int -> %lu*/

int main(){
    int y = 2147483647;

    //dobra o limite do valor possível do lado positivo pois não usa números negativos
    unsigned int x = 2147483647;

    printf("\n\t%d\n\n", y);
    printf("\n\t%d\n\n", ++y);

    printf("\n\t%u\n\n", x);
    printf("\n\t%u\n\n", ++x);

    unsigned short int z = 55000;
    printf("\n\t%hu\n\n", z);

    return 0;
}
