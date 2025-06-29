#include<stdio.h>
#include<locale.h>

/*Aula 61
    Um usu�rio deseja um programa onde possa escolher que tipo de m�dia
    deseja calcular a partir de tr�s notas. Fa�a um programa que leia as
     notas e o tipo da m�dia escolhida pelo usu�rio e calcule a apresente
     a m�dia:
    Op��es:
    � �a� - Aritm�tica.
    � �p� - Ponderada (pesos: 3,3,4).

*/

int main(){
    setlocale(LC_ALL, "Portuguese");

    //Declara��o de vari�veis
    float nota1, nota2, nota3;
    char opcao;

    //Entrada de dados pelo usu�rio
    printf("\nDigite a 1� nota: ");
    scanf("%f", &nota1);

    printf("Digite a 2� nota: ");
    scanf("%f", &nota2);

    printf("Digite a 3� nota: ");
    scanf("%f", &nota3);

    //Escolha do tipo de m�dia para calcular
    printf("\n'a' - Calcular M�dia aritm�tica\n");
    printf("\n'p' - Calcular M�dia Ponderada\n");
    printf("\nDigite a op��o desejada: ");
    scanf(" %c", &opcao);

    //Exibi��o do resultado
    switch(opcao){
    case 'a':
    case 'A':
        printf("\nM�dia Aritm�tica: %.2f\n",(nota1 + nota2 + nota3)/3);
        break;
    case 'p':
    case 'P':
        printf("\nM�dia Ponderada: %.2f\n", (3*nota1 + 3*nota2 + 4*nota3)/10);
        break;
    default:
        printf("\nOp��o inv�lida!\n");
    }

    return 0;
}
