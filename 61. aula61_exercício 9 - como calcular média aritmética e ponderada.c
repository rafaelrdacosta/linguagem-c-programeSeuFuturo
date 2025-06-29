#include<stdio.h>
#include<locale.h>

/*Aula 61
    Um usuário deseja um programa onde possa escolher que tipo de média
    deseja calcular a partir de três notas. Faça um programa que leia as
     notas e o tipo da média escolhida pelo usuário e calcule a apresente
     a média:
    Opções:
    • ‘a’ - Aritmética.
    • ‘p’ - Ponderada (pesos: 3,3,4).

*/

int main(){
    setlocale(LC_ALL, "Portuguese");

    //Declaração de variáveis
    float nota1, nota2, nota3;
    char opcao;

    //Entrada de dados pelo usuário
    printf("\nDigite a 1ª nota: ");
    scanf("%f", &nota1);

    printf("Digite a 2ª nota: ");
    scanf("%f", &nota2);

    printf("Digite a 3ª nota: ");
    scanf("%f", &nota3);

    //Escolha do tipo de média para calcular
    printf("\n'a' - Calcular Média aritmética\n");
    printf("\n'p' - Calcular Média Ponderada\n");
    printf("\nDigite a opção desejada: ");
    scanf(" %c", &opcao);

    //Exibição do resultado
    switch(opcao){
    case 'a':
    case 'A':
        printf("\nMédia Aritmética: %.2f\n",(nota1 + nota2 + nota3)/3);
        break;
    case 'p':
    case 'P':
        printf("\nMédia Ponderada: %.2f\n", (3*nota1 + 3*nota2 + 4*nota3)/10);
        break;
    default:
        printf("\nOpção inválida!\n");
    }

    return 0;
}
