#include<stdio.h>
#include<locale.h>

/*Aula 57
    Fa�a um programa para ler um n�mero inteiro e verificar se
    corresponde a um m�s v�lido no calend�rio. Caso corresponda,
    escrever o nome do m�s, caso contr�rio, escrever a mensagem �M�s
Inv�lido�.
*/

int main(){
    setlocale(LC_ALL, "Portuguese");

    //Declara��o de vari�veis
    int num;

    //Entrada de dados pelo usu�rio
    printf("Digite o n�mero correspondente ao m�s: ");
    scanf("%d", &num);

    //Verifica��o e exibi��o do m�s
    //Pode ser feito tamb�m com switch/case
    if (num >= 1 && num <=12){
        if(num == 1)
            printf("\nM�s: Janeiro.\n");
        else if(num == 2)
             printf("\nM�s: Fevereiro.\n");
        else if(num == 3)
            printf("\nM�s: Mar�o.\n");
        else if(num == 4)
            printf("\nM�s: Abril.\n");
        else if(num == 5)
            printf("\nM�s: Maio.\n");
        else if(num == 6)
            printf("\nM�s: Junho.\n");
        else if(num == 7)
            printf("\nM�s: Julho.\n");
        else if(num == 8)
            printf("\nM�s: Agosto.\n");
        else if(num == 9)
            printf("\nM�s: Setembro.\n");
        else if(num == 10)
            printf("\nM�s: Outubro.\n");
        else if(num == 11)
            printf("\nM�s: Novembro.\n");
        else if(num == 12)
            printf("\nM�s: Dezembro.\n");
    }else
        printf("\nM�s inv�lido!\n");

    return 0;
}
