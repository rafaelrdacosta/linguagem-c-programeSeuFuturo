#include<stdio.h>
#include<locale.h>

/* Aula 4
    Lendo n�meros inteiros.
*/

int main(){
    setlocale(LC_ALL, "Portuguese");

    int valor, valor2;  //criei um vari�vel para guardar um valor do tipo inteiro
    valor = 50; //atribui��o de um valor � vari�vel valor

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor); //salvar o n�mero inteiro no endere�o (&) de mem�ria com nome valor

    printf("Digite um segundo valor inteiro: ");
    scanf("%d", &valor2);

    printf("\n\nPrimeiro valor: %d\nSegundo valor: %d\n\n", valor, valor2);

    return 0;
}
