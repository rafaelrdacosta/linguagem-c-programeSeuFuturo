#include<stdio.h>
#include<locale.h>

/*Aula 24
    Operadores matemáticos
    Soma +
    Subtração -
    Multiplicação *
    Divisão /
*/

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("\nSoma: %d\n", 10 + 20);
    printf("\nSubtração: %d\n", 10 - 20);
    printf("\nMultiplicação: %d\n", 10 * 20);
    printf("\nDivisão Inteira: %d\n", 10 / 20); //divisão inteira
    printf("\nDivisão: %f\n", 10.0 / 20);

    return 0;
}
