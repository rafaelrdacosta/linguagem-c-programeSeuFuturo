#include<stdio.h>
#include<locale.h>

/*Aula 59
    Elabore um programa que, dado o n�mero do m�s, indica quantos dias
     t�m esse m�s. Utilize para isso a estrutura de sele��o switch.
Obs.: Considere fevereiro como tendo 28 dias.
*/

int main(){
    setlocale(LC_ALL, "Portuguese");

    //Declara��o de vari�veis
    int mes;

    //Entrada de dados pelo usu�rio
    printf("\nInforme o n�mero do m�s correspondente: ");
    scanf("%d", &mes);

    switch(mes){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("\nO m�s tem 31 dias.\n");
        break;
    case 2:
        printf("\nO m�s tem 28 dias.\n");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("\nO m�s tem 30 dias.\n");
        break;
    default:
        printf("\nValor inv�lido!\n");
    }
    return 0;
}
