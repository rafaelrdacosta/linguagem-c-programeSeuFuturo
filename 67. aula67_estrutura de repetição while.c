#include<stdio.h>
#include<locale.h>

/*Aula 67: Estrutura de repeti��o while*/

int main(){
    setlocale(LC_ALL, "Portuguese");

    int valor;

    printf("\nDigite um valor maior que zero: ");
    scanf("%d", &valor);

    while(valor <= 0){
        printf("\nValor inv�lido!\nDigite um valor maior que zero: ");
        scanf("%d", &valor);
    }

    printf("\nValor lido: %d\n\n", valor);

    return 0;
}
