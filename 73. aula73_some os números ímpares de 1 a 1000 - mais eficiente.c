#include<stdio.h>
#include<locale.h>

/*Aula 73
    Faça um programa que some os números ímpares entre 1 e 1000 e imprima a resposta.
Restrição:
→ O bloco de repetição deve executar no máximo 500 vezes.
*/

int main(){
    setlocale(LC_ALL, "Portuguese");

    int soma = 0;

    for(int i = 1; i < 1000; i += 2)
        soma += i;

    printf("\nA soma dos números ímpares entre 1 e 1000 é: %d\n", soma);

    return 0;
}
