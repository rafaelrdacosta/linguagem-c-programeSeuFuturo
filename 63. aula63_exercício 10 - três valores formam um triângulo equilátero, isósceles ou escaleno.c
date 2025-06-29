#include<stdio.h>
#include<locale.h>

/*Aula 63
    Faça um programa que, dado três valores a, b e c, verifique se eles
    podem ser os comprimentos dos lados de um triângulo. Caso positivo,
    seu programa deve informar também se o triângulo é equilátero,
    isósceles ou escaleno. Caso contrário, seu programa deve escrever a
    mensagem “Não formam um triângulo”.
*/

int main(){
    setlocale(LC_ALL, "Portuguese");

    //Declaração de variáveis
    float a, b, c;

    //Entrada de dados pelo usuário
    printf("Digite os valores do três lados do triângulo:\n");
    scanf("%f%f%f", &a, &b, &c);

    if(a + b > c && a + c > b && b + c > a){
        if( a == b && b == c)
            printf("Os três lados formam um Triângulo Equilátero.\n");
        else if(a == b || a == c || b == c)
            printf("Os três lados formam um Triângulo Isósceles.\n");
        else
            printf("Os três lados formam Triângulo Escaleno.\n");
    }else{
        printf("\nNão formam um triângulo!\n");
    }
    return 0;
}
