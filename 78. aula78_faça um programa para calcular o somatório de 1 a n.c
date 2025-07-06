#include<stdio.h>
#include<locale.h>


/*Aula 78
    Faça um programa que calcule o valor de A, dado por:
    A = 1 + 2 + 3 + 4 + … + n, onde n é um número inteiro,
    maior que zero informado pelo usuário.
*/


int main(){
    setlocale(LC_ALL, "Portuguese");

    int num, soma = 0;

    do{
       printf("\nDigite um número inteiro: ");
       scanf("%d", &num);
    }while(num <= 0);

    for(int i = 0; i <= num; i++)
        soma += i;

    printf("\nSoma de 1 até %d: %d\n", num, soma);

    return 0;
}
