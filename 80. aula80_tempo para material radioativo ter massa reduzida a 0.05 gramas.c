#include<stdio.h>

/*Aula 80
    Um determinado material radioativo perde metade de sua massa a cada
     50 segundos. Dada a massa inicial, em gramas, faça um programa que
     determine o tempo necessário para que essa massa
    se torne menor que 0,05 gramas.
*/

int main(){

    float massa;
    int segundos = 0;

    do{
        printf("\nInforme a massa: ");
        scanf("%f", &massa);
    }while(massa <= 0);

    while(massa >= 0.05){
        massa /= 2;
        segundos += 50;
    }

    printf("\nMassa final: %.3f\n", massa);
    printf("Tempo total: %d\n", segundos);

    return 0;
}
