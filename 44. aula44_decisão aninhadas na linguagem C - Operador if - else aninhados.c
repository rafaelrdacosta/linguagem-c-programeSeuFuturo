#include<stdio.h>
#include<locale.h>

/*Aula 44 - Decisão aninhadas*/


int main(){
    setlocale(LC_ALL, "Portuguese");

    int a = 10;

    printf("\nDigite um valor qualquer: ");
    scanf("%d", &a);

    if(a < 0)
        printf("\n\tValor negativo!\n");
    else{
        if(a > 0)
            printf("\n\tValor positivo!\n");
        else
            printf("\n\tValor igual a zero!\n");
    }

    return 0;
}
