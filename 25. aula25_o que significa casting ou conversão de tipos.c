#include<stdio.h>
#include<locale.h>

/*Aula 25
    Convers�o de tipos
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
    printf("\nSubtra��o: %d\n", a - b);
    printf("\nMultiplica��o: %d\n", a * b);
    printf("\nDivis�o Inteira: %d\n", a / b); //divis�o inteira
    printf("\nDivis�o: %f\n", (float)a / b); //casting de a

    return 0;
}
