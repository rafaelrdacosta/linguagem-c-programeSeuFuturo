#include<stdio.h>
#include<locale.h>

/*Aula 20
    Tamanho de um float na mem�ria
    %f*/

int main(){
    setlocale(LC_ALL, "Portuguese");
    float x = 3.1415;

    printf("Um float precisa de %d bytes de mem�ria.\n", sizeof x);


    return 0;
}
