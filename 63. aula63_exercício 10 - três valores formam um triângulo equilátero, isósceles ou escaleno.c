#include<stdio.h>
#include<locale.h>

/*Aula 63
    Fa�a um programa que, dado tr�s valores a, b e c, verifique se eles
    podem ser os comprimentos dos lados de um tri�ngulo. Caso positivo,
    seu programa deve informar tamb�m se o tri�ngulo � equil�tero,
    is�sceles ou escaleno. Caso contr�rio, seu programa deve escrever a
    mensagem �N�o formam um tri�ngulo�.
*/

int main(){
    setlocale(LC_ALL, "Portuguese");

    //Declara��o de vari�veis
    float a, b, c;

    //Entrada de dados pelo usu�rio
    printf("Digite os valores do tr�s lados do tri�ngulo:\n");
    scanf("%f%f%f", &a, &b, &c);

    if(a + b > c && a + c > b && b + c > a){
        if( a == b && b == c)
            printf("Os tr�s lados formam um Tri�ngulo Equil�tero.\n");
        else if(a == b || a == c || b == c)
            printf("Os tr�s lados formam um Tri�ngulo Is�sceles.\n");
        else
            printf("Os tr�s lados formam Tri�ngulo Escaleno.\n");
    }else{
        printf("\nN�o formam um tri�ngulo!\n");
    }
    return 0;
}
