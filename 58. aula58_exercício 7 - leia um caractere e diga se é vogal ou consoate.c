#include<stdio.h>
#include<locale.h>

/*Aula 58
   Fa�a um programa que pe�a ao usu�rio um caracter e
   diga se � uma vogal ou n�o.
*/

int main(){
    setlocale(LC_ALL, "Portuguese");

    //Declara��o de vari�veis
    char letra;

    //Entrada de dados pelo usu�rio
    printf("Digite um caracter: ");
    scanf(" %c", &letra);

    //Verificar e exibir se � vogal ou consoante
    //Pode usar if tamb�m
    switch(letra){
        case 'a':
        case 'A':

        case 'e':
        case 'E':

        case 'i':
        case 'I':

        case 'o':
        case 'O':

        case 'u':
        case 'U':
            printf("\nCaracter: %c - Vogal.\n", letra);
            break;
        default:
            printf("\nO caracter digitado n�o � vogal.\n");
    }
    return 0;
}
