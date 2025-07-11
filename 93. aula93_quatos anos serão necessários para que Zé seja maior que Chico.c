#include<stdio.h>
#include<locale.h>

/*Aula 93
    Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto
    Zé tem 1,10 metro e cresce 3 centímetros por ano.
    Construa um programa que calcule e imprima quantos anos serão necessários
para que Zé seja maior que Chico.
*/


int main(){
    setlocale(LC_ALL, "Portuguese");
    int altChico = 150, altZe = 110, anos = 0;

    while(altChico >= altZe){
        altZe += 3;
        altChico += 2;
        anos++;
    }

    printf("\nSerão necessários %d anos!\n", anos);

    return 0;
}
