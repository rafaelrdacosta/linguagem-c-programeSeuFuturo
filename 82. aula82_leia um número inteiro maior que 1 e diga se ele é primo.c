#include<stdio.h>
#include<locale.h>

/*Aula 82
    Faça um programa que peça ao usuário um número inteiro maior que 2 e
    diga se o número informado é primo ou não.

*/

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num, contador;

    do{
       printf("\nDigite um número inteiro maior que 2: ");
        scanf("%d", &num);
    }while(num < 2);

    for(int i = 1; i <= num; i++)
        if(num % i == 0)
            contador++;


    if(contador == 2)
        printf("\nNúmero %d é primo.\n", num);
    else
        printf("\nNúmero %d não é primo.\n", num);


    return 0;
}
