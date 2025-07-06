#include<stdio.h>
#include<locale.h>

/*Aula 76
   Leia um valor inteiro N. Apresente o quadrado de cada um dos
   valores pares, de 1 até N, inclusive N, se for o caso.
*/

int main(){
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("\nDigite um número inteiro: ");
    scanf("%d", &num);

    for(int i = 2; i <= num; i += 2)
        printf("\n%d ", i * i);

    return 0;
}
