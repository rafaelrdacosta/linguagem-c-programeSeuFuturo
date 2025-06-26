#include<stdio.h>
#include<locale.h>

/*Aula 22
    operador long para o tipo double
    double -> %lf
    long double -> %Lf
    __mingw_printf();*/


int main(){
    setlocale(LC_ALL, "Portuguese");
    double y = 3.14159265358979323846;
    long double x = 3.14159265358979323846;

    printf("Um double precisa de %d bytes de memória.\n", sizeof y);
    printf("Valor de y: %lf\n", y);
    printf("Valor de y: %.10lf\n", y);

    printf("\nUm long double precisa de %d bytes de memória.\n", sizeof x);
    //o sistema operacional não suporta a impressão de um nr de 16 bytes
    printf("Valor de x: %.Lf\n", x);

    //tem que usar uma função do núcleo do compilador
    __mingw_printf("Valor de x: %.15Lf\n", x);
    return 0;
}
