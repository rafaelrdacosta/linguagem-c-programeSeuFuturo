#include<stdio.h>
#include<locale.h>

/*Aula 82
    Fa�a um programa que pe�a ao usu�rio um n�mero inteiro maior que 2 e
    diga se o n�mero informado � primo ou n�o.
*/

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num, contador = 0, opcao;

    do{
        do{
           printf("\nDigite um n�mero inteiro maior que 1: ");
            scanf("%d", &num);
        }while(num < 2);

        printf("\nDivisores de %d: ", num);
        for(int i = 2; i <= num/2; i++)
            if(num % i == 0){
             printf("%d ", i);
             contador++;
            }

        if(contador == 0)
            printf("\nN�mero %d � primo.\n", num);
        else
            printf("\nN�mero %d n�o � primo.\n", num);

        printf("\n1 - Digitar outro valor\n");
        printf("2 - Sair\n");
        scanf("%d", &opcao);
    }while(opcao != 2);

    return 0;
}
