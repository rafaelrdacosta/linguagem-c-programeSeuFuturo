#include<stdio.h>
#include<locale.h>

/* Aula 4
    Lendo números inteiros.
*/

int main(){
    setlocale(LC_ALL, "Portuguese");

    int valor, valor2;  //criei um variável para guardar um valor do tipo inteiro
    valor = 50; //atribuição de um valor à variável valor

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor); //salvar o número inteiro no endereço (&) de memória com nome valor

    printf("Digite um segundo valor inteiro: ");
    scanf("%d", &valor2);

    printf("\n\nPrimeiro valor: %d\nSegundo valor: %d\n\n", valor, valor2);

    return 0;
}
