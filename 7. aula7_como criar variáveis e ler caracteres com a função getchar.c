#include<stdio.h>

/*Aula 7 - Lendo caracteres - função getchar()*/

int main(){

    char letra;

    printf("Digite uma letra: ");
    letra = getchar(); //getchar retorna o caracterer armazenado

    printf("Caracter lido: %c\n", letra);

    return 0;
}
