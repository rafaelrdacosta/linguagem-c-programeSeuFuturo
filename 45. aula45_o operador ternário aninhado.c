#include<stdio.h>
#include<locale.h>

/*Aula 45 - Operador tern�rio aninhado*/


int main(){
    setlocale(LC_ALL, "Portuguese");

    int a = 10;

    printf("\nDigite um valor qualquer: ");
    scanf("%d", &a);

    //operador tern�rio aninhado
    a < 0 ? printf("\n\tValor negativo!\n"):
        //ap�s os ":" ser� feito outro teste
        a > 0 ? printf("\n\tValor positivo!\n"):
            printf("\n\tValor igual a zero!\n");

    return 0;
}
