#include<stdio.h>
#include<locale.h>

/*Aua 77
     Escreva um programa em C que funcione como uma calculadora.
     O programa deve apresentar um menu ao usuário da seguinte
     forma:

1 – Somar
2 – Subtrair
3 – Multiplicar
4 – Dividir
0 – Sair

    Uma estrutura do tipo switch deve ser utilizada para realizar
    cada operação em um case. Após a escolha da operação, dois
    valores devem ser pedidos ao usuário para realizar a operação
    escolhida. Se a operação escolhida for a 4 o dividendo não
    pode ser zero, um novo valor deve ser solicitado. O programa
     deve funcionar até que o usuário escolha a opção 0
    (opção de saída).
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
        printf("Digite a opção desejada: ");
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
                printf("Subtração: %d\n", num1 - num2);
                break;
            case 3:
                printf("Multiplicação: %d\n", num1 * num2);
                break;
            case 4:
                while(num2 == 0);{
                   printf("\nDividendo deve ser diferente de zero!\nDigite o segundo número novamente: ");
                   scanf("%d", &num2);
                }
                printf("Divisão: %d\n", num1 / num2);
                break;
            case 0:
                printf("\nSaindo...\n");
                break;
            default:
                 printf("\nOpção inválida!\nDigite novamente a opção: ");

        }
    }while(opcao != 0);
    return 0;
}
