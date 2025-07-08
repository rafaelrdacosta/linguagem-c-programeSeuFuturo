#include<stdio.h>
#include<locale.h>

/*Aula 85
Faça um programa que peça ao usuário dois números inteiros e apresente o resultado na
multiplicação entre os dois números sem utilizar a operação de multiplicação
*/

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num1, num2;

    printf("\nDigite dois números: ");
    scanf("%d%d", &num1, &num2);

    int resultado = 0;
    for(int i = 1; i <= num2; i++)
        resultado += num1;

    printf("\n%d * %d = %d\n", num1, num2, resultado);

    return 0;
}
