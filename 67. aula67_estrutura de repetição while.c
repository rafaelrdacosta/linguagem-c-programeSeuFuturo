#include<stdio.h>
#include<locale.h>

/*Aula 67: Estrutura de repetição while*/

int main(){
    setlocale(LC_ALL, "Portuguese");

    int valor;

    printf("\nDigite um valor maior que zero: ");
    scanf("%d", &valor);

    while(valor <= 0){
        printf("\nValor inválido!\nDigite um valor maior que zero: ");
        scanf("%d", &valor);
    }

    printf("\nValor lido: %d\n\n", valor);

    return 0;
}
