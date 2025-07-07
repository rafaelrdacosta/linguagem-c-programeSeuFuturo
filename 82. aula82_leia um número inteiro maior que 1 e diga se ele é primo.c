#include<stdio.h>
#include<locale.h>

/*Aula 82
    Faça um programa que peça ao usuário um número inteiro maior que 2 e
    diga se o número informado é primo ou não.
*/

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num, contador = 0, opcao;

    do{
        do{
           printf("\nDigite um número inteiro maior que 1: ");
            scanf("%d", &num);
        }while(num < 2);

        printf("\nDivisores de %d: ", num);
        for(int i = 2; i <= num/2; i++)
            if(num % i == 0){
             printf("%d ", i);
             contador++;
            }

        if(contador == 0)
            printf("\nNúmero %d é primo.\n", num);
        else
            printf("\nNúmero %d não é primo.\n", num);

        printf("\n1 - Digitar outro valor\n");
        printf("2 - Sair\n");
        scanf("%d", &opcao);
    }while(opcao != 2);

    return 0;
}
