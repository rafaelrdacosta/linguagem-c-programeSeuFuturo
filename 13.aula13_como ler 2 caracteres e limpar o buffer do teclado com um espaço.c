#include<stdio.h>

/*Aula 13
    Ler dois caracteres*/

int main(){
    char a, b;

    printf("Digite duas letras: ");
    scanf("%c %c", &a, &b);

    /*espaço entre os %c -> comando para o computador desconsiderar o
    ENTER, o TAB ou ESPAÇO*/
    //Não utilizar a função fflush(): só funciona no windows
    //o fflush() não funciona em todos os casos

    printf("Primeira letra: %c\nSegunda letra: %c\n", a, b);

    return 0;
}
