#include<stdio.h>
#include<locale.h>

/*Aula 43
    Operador ternário em C
    CONDIÇÃO ? VERDADEIRO : FALSO*/

int main(){
    setlocale(LC_ALL, "Portuguese");

    int a;

    printf("\nDigite um valor qualquer: ");
    scanf("%d", &a);

    a < 0 ? printf("\n\tValor negativo!\n") : printf("\n\tValor positivo ou igual a zero!\n");

    printf("\nContinuação do programa...\n");

    return 0;
}

