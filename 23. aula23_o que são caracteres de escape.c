#include<stdio.h>
#include<locale.h>

/*Aula 23
    Caracteres de escape
    Quebra de linha - \n
    Tabula��o - \t
    Aspa dupla - \"
    Aspa simples - \'
    Contrabarra - \\*/

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("\n\n\tIsto � uma \"mensagem\" a ser impressa na tela.\n\n");



    return 0;
}
