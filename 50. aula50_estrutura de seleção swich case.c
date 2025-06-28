#include<stdio.h>
#include<locale.h>

/*Aula 50: Estrutura de seleção switch case
    opções: - cadastrar produto
            - vender produto
            - buscar produto
            - imprimir relatório
            - sair
*/

int main(){
    setlocale(LC_ALL, "Portuguese");

    int opcao;

    printf("1 - Cadastrar produto\n");
    printf("2 - Vender produto\n");
    printf("3 - Buscar produto\n");
    printf("4 - Imprimir\n");
    printf("5 - Sair\n");

    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            printf("\nCadastrando novo produto.\n");
            break;
        case 2:
            printf("\nVendendo um novo produto.\n");
            break;
        case 3:
            printf("\nBuscando novo produto.\n");
            break;
        case 4:
            printf("\nImprimindo relatório.\n");
            break;
        case 5:
            printf("\nSaindo...\n");
            break;
        default:
            printf("\nOpção inválida!\n");
    }
    return 0;
}
