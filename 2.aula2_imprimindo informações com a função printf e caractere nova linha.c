#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//caractere de escape para saltar uma linha -> \n

int main(){
    setlocale(LC_ALL, "Portuguese");

    //printf é uma função de saída
    printf("\nOlá, seja bem-vindo!\n");

    //a função print retorna a qtd de caracteres impressos na tela
    printf("\nValor retornado: %d", printf("Bom"));

    return 0;
}
