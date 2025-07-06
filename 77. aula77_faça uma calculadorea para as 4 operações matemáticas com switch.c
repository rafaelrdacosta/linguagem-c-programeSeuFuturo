#include<stdio.h>
#include<locale.h>

/*Aua 77
     Escreva um programa em C que funcione como uma calculadora.
     O programa deve apresentar um menu ao usu�rio da seguinte
     forma:

1 � Somar
2 � Subtrair
3 � Multiplicar
4 � Dividir
0 � Sair

    Uma estrutura do tipo switch deve ser utilizada para realizar
    cada opera��o em um case. Ap�s a escolha da opera��o, dois
    valores devem ser pedidos ao usu�rio para realizar a opera��o
    escolhida. Se a opera��o escolhida for a 4 o dividendo n�o
    pode ser zero, um novo valor deve ser solicitado. O programa
     deve funcionar at� que o usu�rio escolha a op��o 0
    (op��o de sa�da).
*/

int main(){
    setlocale(LC_ALL, "Portuguese");

    int opcao, num1, num2;

    do{
        printf("\n1 - Somar\n");
        printf("2 - Subtrair\n");
        printf("3 - Multiplicar\n");
        printf("4 - Dividir\n");
        printf("0 - Sair\n");
        printf("Digite a op��o desejada: ");
        scanf("%d", &opcao);

        if(opcao > 0 && opcao < 5){
            printf("\nDigite dois valores: ");
            scanf("%d%d", &num1, &num2);
        }

        switch(opcao){
            case 1:
                printf("Soma: %d\n", num1 + num2);
                break;
            case 2:
                printf("Subtra��o: %d\n", num1 - num2);
                break;
            case 3:
                printf("Multiplica��o: %d\n", num1 * num2);
                break;
            case 4:
                while(num2 == 0);{
                   printf("\nDividendo deve ser diferente de zero!\nDigite o segundo n�mero novamente: ");
                   scanf("%d", &num2);
                }
                printf("Divis�o: %d\n", num1 / num2);
                break;
            case 0:
                printf("\nSaindo...\n");
                break;
            default:
                 printf("\nOp��o inv�lida!\nDigite novamente a op��o: ");

        }
    }while(opcao != 0);
    return 0;
}
