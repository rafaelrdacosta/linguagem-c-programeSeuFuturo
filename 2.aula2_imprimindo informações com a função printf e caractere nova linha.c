#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//caractere de escape para saltar uma linha -> \n

int main(){
    setlocale(LC_ALL, "Portuguese");

    //printf � uma fun��o de sa�da
    printf("\nOl�, seja bem-vindo!\n");

    //a fun��o print retorna a qtd de caracteres impressos na tela
    printf("\nValor retornado: %d", printf("Bom"));

    return 0;
}
