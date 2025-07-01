#include<stdio.h>

/*Aula 69: Diferença entre for, while e do{} while*/

int main(){
    int i;

    /*
    printf("\nGerado com for: ");
    for(i = 0; i <= 10; i++)
        printf("%d ", i);

    printf("\nGerado com while: ");
    i = 0;
    while(i <= 10){
       printf("%d ", i++);
    }*/

    do{
        printf("\nDigite um valor maior que zero: ");
        scanf("%d", &i);
    }while(i <= 0);
    printf("\n\tValor lido: %d\n", i);

    return 0;
}
