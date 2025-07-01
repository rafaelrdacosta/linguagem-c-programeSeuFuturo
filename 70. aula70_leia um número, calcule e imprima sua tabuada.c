#include<stdio.h>
#include<locale.h>

/*Aula 70
Elabore um programa em C para ler do teclado um valor inteiro entre 1 e 10
e apresentar a tabuada. Exemplo:
Entrada 7
Saída:
7 * 1 = 7
7 * 2 = 14
7 * 3 = 21
7 * 4 = 28
7 * 5 = 35
7 * 6 = 42
7 * 7 = 49
7 * 8 = 56
7 * 9 = 63
7 * 10 = 70
*/

int main(){
    setlocale(LC_ALL, "Portuguese");

    //Declaração de variável
    int num;

    //Entrada de dados pelo usuário e validação
    do{
        printf("\nDigite um número [entre 1 e 10] para exibir a tabuada: ");
        scanf("%d", &num);
    }while(num <= 0 || num > 10);


    //Exibição da tabuada
    for(int i = 1; i <= 10; i++)
        printf("%d * %2.d = %2.d\n", num, i, num * i);

    return 0;
}
