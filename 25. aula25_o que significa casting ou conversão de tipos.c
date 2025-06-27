#include<stdio.h>
#include<locale.h>

/*Aula 25
    Conversão de tipos
*/

int main(){
    setlocale(LC_ALL, "Portuguese");

    int a = 10, b = 20;
    float pi = 3.1415;
    int c;

    c = (int) pi;
    printf("Valor de pi: %f\n", pi);
    printf("Valor de c: %d\n", c);

    printf("\nSoma: %d\n", a + b);
    printf("\nSubtração: %d\n", a - b);
    printf("\nMultiplicação: %d\n", a * b);
    printf("\nDivisão Inteira: %d\n", a / b); //divisão inteira
    printf("\nDivisão: %f\n", (float)a / b); //casting de a

    return 0;
}
