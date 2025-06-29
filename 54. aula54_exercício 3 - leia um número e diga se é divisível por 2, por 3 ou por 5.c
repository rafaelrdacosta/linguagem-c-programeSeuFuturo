#include<stdio.h>
#include<locale.h>

/*Aula 54
    Escreva um programa em C que leia um número e informe
    se ele é divisível por 2, por 3 ou por 5, ou se não é
    divisível por nenhum deles.*/

int main(){
    setlocale(LC_ALL, "Portuguese");

    //Declaração de variável
    int num;

    //Entrada de dados
    printf("Digite um número qualquer: ");
    scanf("%d", &num);

    //Verificação se é divisível por 2, 3, 5 ou nenhum destes
    if(num % 2 == 0)
        printf("\nO número %d é divisível por 2.\n", num);
    if(num % 3 == 0)
        printf("\nO número %d é divisível por 3.\n", num);
    if(num % 5 == 0)
        printf("\nO número %d é divisível por 5.\n", num);
    else if (num % 2 != 0 && num % 3 != 0 && num % 5 != 0)
        printf("\nO número %d não é divisível por 2, 3 ou 5.\n", num);

    return 0;
}
