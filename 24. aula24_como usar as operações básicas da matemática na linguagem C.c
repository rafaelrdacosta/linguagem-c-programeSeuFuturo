#include<stdio.h>
#include<locale.h>

/*Aula 24
    Operadores matem�ticos
    Soma +
    Subtra��o -
    Multiplica��o *
    Divis�o /
*/

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("\nSoma: %d\n", 10 + 20);
    printf("\nSubtra��o: %d\n", 10 - 20);
    printf("\nMultiplica��o: %d\n", 10 * 20);
    printf("\nDivis�o Inteira: %d\n", 10 / 20); //divis�o inteira
    printf("\nDivis�o: %f\n", 10.0 / 20);

    return 0;
}
