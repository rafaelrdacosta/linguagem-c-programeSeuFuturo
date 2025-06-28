#include<stdio.h>
#include<locale.h>

/*Aula 51: Estrutura de sele��o switch case
    op��es: - cadastrar produto
            - vender produto
            - buscar produto
            - imprimir relat�rio
            - sair
*/

int main(){
    setlocale(LC_ALL, "Portuguese");

    char opcao;

    printf("a - Cadastrar produto\n");
    printf("b - Vender produto\n");
    printf("c - Buscar produto\n");
    printf("d - Imprimir\n");
    printf("z - Sair\n");

    printf("Digite a op��o desejada: ");
    scanf(" %c", &opcao);

    switch(opcao){
        case 'a':
            printf("\nCadastrando novo produto.\n");
            break;
        case 'b':
            printf("\nVendendo um novo produto.\n");
            break;
        case 'c':
            printf("\nBuscando novo produto.\n");
            break;
        case 'd':
            printf("\nImprimindo relat�rio.\n");
            break;
        case 'z':
            printf("\nSaindo...\n");
            break;
        default:
            printf("\nOp��o inv�lida!\n");
    }
    return 0;
}
