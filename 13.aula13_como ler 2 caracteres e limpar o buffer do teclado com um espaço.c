#include<stdio.h>

/*Aula 13
    Ler dois caracteres*/

int main(){
    char a, b;

    printf("Digite duas letras: ");
    scanf("%c %c", &a, &b);

    /*espa�o entre os %c -> comando para o computador desconsiderar o
    ENTER, o TAB ou ESPA�O*/
    //N�o utilizar a fun��o fflush(): s� funciona no windows
    //o fflush() n�o funciona em todos os casos

    printf("Primeira letra: %c\nSegunda letra: %c\n", a, b);

    return 0;
}
