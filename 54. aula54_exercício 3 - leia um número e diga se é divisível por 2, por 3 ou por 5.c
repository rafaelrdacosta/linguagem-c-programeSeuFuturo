#include<stdio.h>
#include<locale.h>

/*Aula 54
    Escreva um programa em C que leia um n�mero e informe
    se ele � divis�vel por 2, por 3 ou por 5, ou se n�o �
    divis�vel por nenhum deles.*/

int main(){
    setlocale(LC_ALL, "Portuguese");

    //Declara��o de vari�vel
    int num;

    //Entrada de dados
    printf("Digite um n�mero qualquer: ");
    scanf("%d", &num);

    //Verifica��o se � divis�vel por 2, 3, 5 ou nenhum destes
    if(num % 2 == 0)
        printf("\nO n�mero %d � divis�vel por 2.\n", num);
    if(num % 3 == 0)
        printf("\nO n�mero %d � divis�vel por 3.\n", num);
    if(num % 5 == 0)
        printf("\nO n�mero %d � divis�vel por 5.\n", num);
    else if (num % 2 != 0 && num % 3 != 0 && num % 5 != 0)
        printf("\nO n�mero %d n�o � divis�vel por 2, 3 ou 5.\n", num);

    return 0;
}
