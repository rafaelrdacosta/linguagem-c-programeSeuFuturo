#include<stdio.h>
#include<locale.h>

/*Aula 85
Fa�a um programa que pe�a ao usu�rio dois n�meros inteiros e apresente o resultado na
multiplica��o entre os dois n�meros sem utilizar a opera��o de multiplica��o
*/

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num1, num2;

    printf("\nDigite dois n�meros: ");
    scanf("%d%d", &num1, &num2);

    int resultado = 0;
    for(int i = 1; i <= num2; i++)
        resultado += num1;

    printf("\n%d * %d = %d\n", num1, num2, resultado);

    return 0;
}
