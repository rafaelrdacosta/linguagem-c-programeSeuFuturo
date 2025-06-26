#include<stdio.h>
#include<locale.h>

/*Aula 5
    Como criar variáveis e ler números reais com
    a função scanf*/

main(){
    setlocale(LC_ALL, "Portuguese");

    float numero = 3.1415;

    printf("Valor da minha variável: %.4f\n", numero);

    float numero2;

    printf("Digite um número real: ");
    scanf("%f", &numero2);

    printf("Valor lido: %.2f\n", numero2);

    return 0;
}
