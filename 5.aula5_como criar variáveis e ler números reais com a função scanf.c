#include<stdio.h>
#include<locale.h>

/*Aula 5
    Como criar vari�veis e ler n�meros reais com
    a fun��o scanf*/

main(){
    setlocale(LC_ALL, "Portuguese");

    float numero = 3.1415;

    printf("Valor da minha vari�vel: %.4f\n", numero);

    float numero2;

    printf("Digite um n�mero real: ");
    scanf("%f", &numero2);

    printf("Valor lido: %.2f\n", numero2);

    return 0;
}
