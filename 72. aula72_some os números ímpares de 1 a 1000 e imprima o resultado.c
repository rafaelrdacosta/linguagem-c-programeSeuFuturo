#include<stdio.h>
#include<locale.h>

/*Aula 72
    Fa�a um programa que some os n�meros �mpares entre 1 e 1000 e imprima
    a resposta.
 */

 int main(){
    setlocale(LC_ALL, "Portuguese");

    int soma = 0;

    for(int i = 1; i < 1000; i++){
        if(i % 2 != 0)
             soma += i;
    }

    printf("\nSoma dos n�meros �mpares entre 1 e 100: %d\n", soma);

    return 0;
 }
