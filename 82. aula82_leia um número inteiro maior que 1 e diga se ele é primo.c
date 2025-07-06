#include<stdio.h>
#include<locale.h>

/*Aula 82
    Fa�a um programa que pe�a ao usu�rio um n�mero inteiro maior que 2 e
    diga se o n�mero informado � primo ou n�o.

*/

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num, contador;

    do{
       printf("\nDigite um n�mero inteiro maior que 2: ");
        scanf("%d", &num);
    }while(num < 2);

    for(int i = 1; i <= num; i++)
        if(num % i == 0)
            contador++;


    if(contador == 2)
        printf("\nN�mero %d � primo.\n", num);
    else
        printf("\nN�mero %d n�o � primo.\n", num);


    return 0;
}
