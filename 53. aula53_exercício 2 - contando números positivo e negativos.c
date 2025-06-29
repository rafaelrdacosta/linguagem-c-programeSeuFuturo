#include<stdio.h>
#include<locale.h>

/*Aula 53
    Escreva um programa em C que l� 5 n�meros inteiros, um por vez.
    Conte quantos destes valores s�o negativos e quantos s�o positivos.
    Ao final, imprima na tela a quantidade de n�meros negativos e positivos.
*/

int main(){
    setlocale(LC_ALL, "Portuguese");

    //Declara��o de vari�veis
    int n1, n2, n3, n4, n5, pos = 0 , neg = 0;

    //Entrada de dados pelo usu�rio
    printf("Digite 1� n�mero inteiro: ");
    scanf("%d", &n1);

    printf("Digite 2� n�mero inteiro: ");
    scanf("%d", &n2);

    printf("Digite 3� n�mero inteiro: ");
    scanf("%d", &n3);

    printf("Digite 4� n�mero inteiro: ");
    scanf("%d", &n4);

    printf("Digite 5� n�mero inteiro: ");
    scanf("%d", &n5);

    //Verifica��o de quantidade de positivos e negativos
    //considerando o zero como positivo
    n1 >= 0 ? pos++ : neg++;
    n2 >= 0 ? pos++ : neg++;
    n3 >= 0 ? pos++ : neg++;
    n4 >= 0 ? pos++ : neg++;
    n5 >= 0 ? pos++ : neg++;

    //Exibi��o dos resultados
    printf("\nQuantidade de n�meros positivos: %d\n", pos);
    printf("Quantidade de n�meros negativos: %d\n", neg);

    return 0;
}
