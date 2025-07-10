#include<stdio.h>

/*Aula 87
    Fa�a um programa que pe�a n�meros ao usu�rio.
  Quando o usu�rio digitar o n�mero 0 (zero) o
  programa deve imprimir na tela quantos n�meros
  positivos e negativos foram digitados.
*/

int main(){
    int num, pos = 0, neg = 0;

    do{
        printf("Digite um n�mero inteiro: ");
        scanf("%d", &num);

        if(num > 0)
            pos++;
        if(num < 0)
            neg++;
    }while(num != 0);

    printf("\nPositivos: %d", pos);
    printf("\nNegativos: %d\n", neg);

    return 0;
}
