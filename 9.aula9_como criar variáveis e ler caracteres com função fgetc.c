#include<stdio.h>

/*Aula 9 - Lendo caracteres
    função fgetc()*/

int main(){
    char letra;

    printf("Digite um caracter: ");
    letra = fgetc(stdin); //file getc() - específica para leitura de arquivo

    printf("Caracter lido: %c\n", letra);

    return 0;
}
