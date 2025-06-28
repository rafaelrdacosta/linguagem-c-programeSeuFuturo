#include<stdio.h>
#include<locale.h>

/*Aula 51: Estrutura de seleção switch case
    opções: - cadastrar produto
            - vender produto
            - buscar produto
            - imprimir relatório
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

    printf("Digite a opção desejada: ");
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
            printf("\nImprimindo relatório.\n");
            break;
        case 'z':
            printf("\nSaindo...\n");
            break;
        default:
            printf("\nOpção inválida!\n");
    }
    return 0;
}
