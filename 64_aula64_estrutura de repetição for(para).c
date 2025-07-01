#include<stdio.h>
#include<locale.h>

/*Aula 64: Estrutura de repetição for(para)*/

int main(){
    setlocale(LC_ALL, "Portuguese");

    int i = 0;

    printf("%d ", i++);
    printf("%d ", i++);
    printf("%d ", i++);
    printf("%d ", i++);
    printf("%d ", i++);
    printf("%d ", i++);
    printf("%d ", i++);
    printf("%d ", i++);
    printf("%d ", i++);
    printf("%d ", i++);
    printf("%d\n\n", i++);

    for(i = 0; i <= 10; i++)
        printf("%d ", i);

    printf("\n%d", i); //após o for o i termina com valor 11
    printf("\n\n");

    return 0;
}
