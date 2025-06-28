#include<stdio.h>
#include<locale.h>

/*Aula 52
    Escreva um programa em C que leia três valores e
    apresente qual é o maior e qual é o menor.*/

int main(){
    setlocale(LC_ALL, "Portuguese");

    //Declaração de variáveis
    int a, b, c, maior, menor;

    //Entrada de dados pelo usuário
    printf("Informe o 1º número: ");
    scanf("%d", &a);

    printf("Informe o 2º número: ");
    scanf("%d", &b);

    printf("Informe o 3º número: ");
    scanf("%d", &c);

    //1ª primeira versão
    if(a < b){
        if(a < c)
            menor = a;
        else
            menor = c;
    }else{
        if(b < c)
            menor = b;
        else
            menor = c;
    }
    if (a > b){
        if(a > c)
            maior = a;
        else
            maior = c;
    }else{
        if(b > c)
            maior = b;
        else
            maior = c;
    }
    //Exibição dos resultados
    printf("\n1ª versão: \n");
    printf("\nMaior número: %d\n", maior);
    printf("\nMenor número: %d\n", menor);

    //2ª versão
    menor = a;
    maior = a;

    if(menor > b)
        menor = b;
    if(menor > c)
        menor = c;
    if(maior < b)
        maior = b;
    if(maior < c)
        maior = c;

    //Exibição dos resultados
    printf("\n2ª versão: \n");
    printf("\nMaior número: %d\n", maior);
    printf("\nMenor número: %d\n", menor);

    //3ª Versão
    if(c > b && b > a){
        maior = c;
        menor = a;
    }else if(b > a && a > c){
        maior = b;
        menor = c;
    }else if(a > b && b > c){
        maior = a;
        menor = c;
    }else if(a > c && c > b){
        maior = a;
        menor = b;
    }
    //Exibição dos resultados
    printf("\n3ª versão: \n");
    printf("\nMaior número: %d\n", maior);
    printf("\nMenor número: %d\n", menor);

    return 0;
}
