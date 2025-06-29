#include<stdio.h>
#include<locale.h>

/*Aula 58
   Faça um programa que peça ao usuário um caracter e
   diga se é uma vogal ou não.
*/

int main(){
    setlocale(LC_ALL, "Portuguese");

    //Declaração de variáveis
    char letra;

    //Entrada de dados pelo usuário
    printf("Digite um caracter: ");
    scanf(" %c", &letra);

    //Verificar e exibir se é vogal ou consoante
    //Pode usar if também
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
            printf("\nO caracter digitado não é vogal.\n");
    }
    return 0;
}
