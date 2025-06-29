#include<stdio.h>
#include<locale.h>

/*Aula 59
    Elabore um programa que, dado o número do mês, indica quantos dias
     têm esse mês. Utilize para isso a estrutura de seleção switch.
Obs.: Considere fevereiro como tendo 28 dias.
*/

int main(){
    setlocale(LC_ALL, "Portuguese");

    //Declaração de variáveis
    int mes;

    //Entrada de dados pelo usuário
    printf("\nInforme o número do mês correspondente: ");
    scanf("%d", &mes);

    switch(mes){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("\nO mês tem 31 dias.\n");
        break;
    case 2:
        printf("\nO mês tem 28 dias.\n");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("\nO mês tem 30 dias.\n");
        break;
    default:
        printf("\nValor inválido!\n");
    }
    return 0;
}
