#include<stdio.h>
#include<locale.h>

/*Aula 46 - Operador l�gico de nega��o
    TABELA VERDADE  x  !x
                    v  f
                    f  v
*/

int main(){
    setlocale(LC_ALL, "Portuguese");

    int a = 10;

    printf("\nDigite um valor qualquer: ");
    scanf("%d", &a);

    !(a < 0) ? printf("\n\tValor negativo!\n"): printf("\n\tValor positivo ou igual a zero!\n");

    return 0;
}


