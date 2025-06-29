#include<stdio.h>
#include<locale.h>

/*Aula 55
    Crie um programa que permita ao usuário escolher entre fazer
    a conversão de Real para Dólar ou de Dólar para Real.
    Utilize como taxa de câmbio $1 igual a R$5.30.
 */

int main(){
    setlocale(LC_ALL, "Portuguese");

    //Declaração de variáveis
    float valor, valorConvertido;
    int opcao;

    //Entrada de dados pelo usuário
    printf("Informe o valor à ser convertido: ");
    scanf("%f", &valor);

    printf("\n1 - Conversão de Real para Dólar.\n");
    printf("2 - Conversão de Dólar para Real.\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    //Câmbio
    switch(opcao){
        case 1:
            valorConvertido = valor / 5.30;
            printf("\nValor convertido: US$ %.2f\n", valorConvertido);
            break;
        case 2:
            valorConvertido = valor * 5.30;
            printf("\nValor convertido: R$ %.2f\n", valorConvertido);
            break;
        default:
            printf("\nOpção inválida!\n");
    }
    return 0;
}
