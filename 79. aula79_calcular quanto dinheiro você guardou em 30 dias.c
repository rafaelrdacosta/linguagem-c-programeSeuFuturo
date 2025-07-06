#include<stdio.h>
#include<math.h>

/*Aula 79
    Você decidiu ficar rico guardando dinheiro por 30 dias consecutivos.
    Para tal, decidiu guardar 1 centavo no primeiro dia, 2 centavos no
    segundo dia, 4 centavos no terceiro dia, 8 centavos no quarto
    dia, e assim por diante.
    Faça um programa para calcular quanto você terá ao final dos 30 dias.
*/

int main(){
    /*float centavos, reais;

    for(int i = 0; i < 30; i++){
        centavos += pow(2, i);
    }

    reais = centavos / 100;

    printf("\nValor acumulado em 30 dias: R$ %.2f\n", reais);
    */

    int valorInicial = 1, valorFinal = 1;

    for(int i = 1; i <= 29; i++){
        valorInicial = valorInicial * 2;
        valorFinal += valorInicial;
    }

    printf("\nValor em centavos: %d\n", valorFinal);
    printf("R$ %.2f\n", valorFinal / 100.0);

    return 0;
}
