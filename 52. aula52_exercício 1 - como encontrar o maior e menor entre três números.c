#include<stdio.h>
#include<locale.h>

/*Aula 52
    Escreva um programa em C que leia tr�s valores e
    apresente qual � o maior e qual � o menor.*/

int main(){
    setlocale(LC_ALL, "Portuguese");

    //Declara��o de vari�veis
    int a, b, c, maior, menor;

    //Entrada de dados pelo usu�rio
    printf("Informe o 1� n�mero: ");
    scanf("%d", &a);

    printf("Informe o 2� n�mero: ");
    scanf("%d", &b);

    printf("Informe o 3� n�mero: ");
    scanf("%d", &c);

    //1� primeira vers�o
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
    //Exibi��o dos resultados
    printf("\n1� vers�o: \n");
    printf("\nMaior n�mero: %d\n", maior);
    printf("\nMenor n�mero: %d\n", menor);

    //2� vers�o
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

    //Exibi��o dos resultados
    printf("\n2� vers�o: \n");
    printf("\nMaior n�mero: %d\n", maior);
    printf("\nMenor n�mero: %d\n", menor);

    //3� Vers�o
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
    //Exibi��o dos resultados
    printf("\n3� vers�o: \n");
    printf("\nMaior n�mero: %d\n", maior);
    printf("\nMenor n�mero: %d\n", menor);

    return 0;
}
