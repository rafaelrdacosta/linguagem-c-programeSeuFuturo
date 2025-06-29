#include<stdio.h>
#include<locale.h>

/*Aula 53
    Escreva um programa em C que lê 5 números inteiros, um por vez.
    Conte quantos destes valores são negativos e quantos são positivos.
    Ao final, imprima na tela a quantidade de números negativos e positivos.
*/

int main(){
    setlocale(LC_ALL, "Portuguese");

    //Declaração de variáveis
    int n1, n2, n3, n4, n5, pos = 0 , neg = 0;

    //Entrada de dados pelo usuário
    printf("Digite 1º número inteiro: ");
    scanf("%d", &n1);

    printf("Digite 2º número inteiro: ");
    scanf("%d", &n2);

    printf("Digite 3º número inteiro: ");
    scanf("%d", &n3);

    printf("Digite 4º número inteiro: ");
    scanf("%d", &n4);

    printf("Digite 5º número inteiro: ");
    scanf("%d", &n5);

    //Verificação de quantidade de positivos e negativos
    //considerando o zero como positivo
    n1 >= 0 ? pos++ : neg++;
    n2 >= 0 ? pos++ : neg++;
    n3 >= 0 ? pos++ : neg++;
    n4 >= 0 ? pos++ : neg++;
    n5 >= 0 ? pos++ : neg++;

    //Exibição dos resultados
    printf("\nQuantidade de números positivos: %d\n", pos);
    printf("Quantidade de números negativos: %d\n", neg);

    return 0;
}
