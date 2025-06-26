#include<stdio.h>

/*Aula 8 - Lendo caracteres
função getc()*/

int main(){
    char letra;

    printf("Digite um caractere: ");
    letra = getc(stdin); //pode ser utilizado de outras fontes - por exemplo um arquivo

    printf("Caracter lido: %c\n", letra);

    return 0;
}
