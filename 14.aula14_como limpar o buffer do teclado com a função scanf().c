#include<stdio.h>

/*Aula 14
    ler dois caracteres*/


int main(){
    char a, b;

    printf("Digite uma letra: ");
    scanf("%c", &a);

    //getchar(); ou espaço antes do próximo %c ou  scanf abaixo
    scanf("%c");

    printf("Digite outra letra: ");
    scanf("%c", &b);

    printf("\nPrimeira letra: %c\nSegunda letra: %c\n", a, b);

    return 0;
}
