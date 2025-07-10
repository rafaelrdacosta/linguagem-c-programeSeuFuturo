#include<stdio.h>

/*Aula 87
    Faça um programa que peça números ao usuário.
  Quando o usuário digitar o número 0 (zero) o
  programa deve imprimir na tela quantos números
  positivos e negativos foram digitados.
*/

int main(){
    int num, pos = 0, neg = 0;

    do{
        printf("Digite um número inteiro: ");
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
