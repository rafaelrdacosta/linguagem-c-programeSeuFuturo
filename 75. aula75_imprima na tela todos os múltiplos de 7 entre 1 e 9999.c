#include<stdio.h>
#include<locale.h>

/*Aula 75
    Fa�a um programa que imprima na tela todos os m�ltiplos
    de 7 entre 1 e 9999.
*/

int main(){

     for(int i = 7; i <= 9999; i += 7)
        printf("%4d ", i);

    return 0;
}
