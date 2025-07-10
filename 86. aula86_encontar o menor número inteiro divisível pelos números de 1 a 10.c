#include<stdio.h>
#include<locale.h>

/*Aula 86
     Faça um programa para encontrar o menor número inteiro que
     seja divisível por todos os números inteiros entre 1 e 10.
     MMC de 1 a 10
*/

int main(){
    setlocale(LC_ALL, "Portuguese");
    /*int num = 10;

    while(num){
        if(num % 2 == 0 && num % 3 == 0 &&  num % 4 == 0 && num % 5 == 0 &&  num % 6 == 0 && num % 7 == 0 && num % 8 == 0 &&  num % 9 == 0 &&  num % 10 == 0){
            printf("\nNúmero (MMC de 1 a 10): %d\n", num);
            break;
        }
    num++;
    }*/

    int i, valor, divisores;

    do{
        divisores = 0; //a cada laço for terminado tem que zerar
        valor += 2; //Só números pares atendem o enunciado
        for(i = 1; i <= 10; i++){
            if(valor % i == 0)
                divisores++;
        }
    }while(divisores != 10); //o valor tem que ser divisível por todos nr de 1 a 10

    printf("\nNúmero (MMC de 1 a 10): %d\n", valor);

    return 0;
}
