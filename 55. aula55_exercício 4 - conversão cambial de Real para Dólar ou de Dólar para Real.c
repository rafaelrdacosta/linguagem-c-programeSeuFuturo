#include<stdio.h>
#include<locale.h>

/*Aula 55
    Crie um programa que permita ao usu�rio escolher entre fazer
    a convers�o de Real para D�lar ou de D�lar para Real.
    Utilize como taxa de c�mbio $1 igual a R$5.30.
 */

int main(){
    setlocale(LC_ALL, "Portuguese");

    //Declara��o de vari�veis
    float valor, valorConvertido;
    int opcao;

    //Entrada de dados pelo usu�rio
    printf("Informe o valor � ser convertido: ");
    scanf("%f", &valor);

    printf("\n1 - Convers�o de Real para D�lar.\n");
    printf("2 - Convers�o de D�lar para Real.\n");
    printf("Digite sua op��o: ");
    scanf("%d", &opcao);

    //C�mbio
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
            printf("\nOp��o inv�lida!\n");
    }
    return 0;
}
