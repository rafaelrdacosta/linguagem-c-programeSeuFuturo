#include<stdio.h>
#include<locale.h>

/*Aula 42
    Endentação e uso das chaves*/

int main(){
    setlocale(LC_ALL, "Portuguese");

    int a;

    printf("\nDigite um valor qualquer: ");
    scanf("%d", &a);

    if(a < 0)
        printf("\n\tValor negativo!\n");
    else
        printf("\n\tValor positivo ou igual a zero!\n");
        //a identação é apenas uma regra visual
        //mais de uma linha dentro do if ou else deve está entre chaves {}
        printf("\n\t**Valor positivo ou igual a zero!**\n");

    printf("\nContinuação do programa...\n");

    return 0;
}
