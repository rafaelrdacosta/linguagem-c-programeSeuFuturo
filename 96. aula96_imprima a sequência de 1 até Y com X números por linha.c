#include<stdio.h>
#include<locale.h>

/*Aula 96
 Escreva um programa que leia dois valores X e Y.
 A seguir, mostre uma sequência de 1 até Y,
passando para a próxima linha a cada X números.
Exemplo de entrada:
3 99
Exemplo de saída:
1 2 3
4 5 6
7 8 9
10 11 12
...
97 98 99

*/

int main(){
    setlocale(LC_ALL, "Portuguese");
    int X, Y;

    do{
        printf("Digite dois números inteiros (X e Y): ");
        scanf("%d %d", &X, &Y);
    }while(X <= 0 || Y <= 0);


    for(int i = 1; i <= Y; i++){
        printf("%3d ", i);

        if(i % X == 0)
            putchar('\n');
    }
    return 0;
}
