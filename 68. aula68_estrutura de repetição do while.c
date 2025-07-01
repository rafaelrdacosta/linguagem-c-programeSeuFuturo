#include<stdio.h>

/*Aula 68 - Estrutura de repetição do{} while*/

int main(){
    int valor;

    do{
        printf("\nDigite um valor maior que zero: ");
        scanf("%d", &valor);
    }while(valor <= 0);

    printf("\nValor lido: %d\n", valor);

    return 0;
}
