#include<stdio.h>
#include<locale.h>

/*Aula 10
    Lendo v�rios valores*/

int main(){
    setlocale(LC_ALL, "Portuguese");

    int num1, num2, num3;

    printf("Digite tr�s valores inteiros: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    printf("Valores lidos: %d, %d e %d\n", num1, num2, num3);

    return 0;
}
