#include<stdio.h>

/*Aula 9 - Lendo caracteres
    fun��o fgetc()*/

int main(){
    char letra;

    printf("Digite um caracter: ");
    letra = fgetc(stdin); //file getc() - espec�fica para leitura de arquivo

    printf("Caracter lido: %c\n", letra);

    return 0;
}
