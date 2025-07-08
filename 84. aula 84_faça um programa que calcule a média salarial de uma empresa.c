#include<stdio.h>
#include<locale.h>

/*Aula 84
   Faça um programa que calcule a média de salários de uma empresa, pedindo ao usuário a
quantidade de funcionários e o salário de cada funcionário. Ao final, o programa deve imprimir a
média dos salários informados, o salário mais alto e o salário mais baixo.
*/

int main(){
    setlocale(LC_ALL, "Portuguese");

    int qtdFunc;
    float salario, totalSal = 0, maiorSal = 0, menorSal = 99999;

    do{
       printf("\Informe a quantidade de funcionários da empresa: ");
       scanf("%d", &qtdFunc);
    }while(qtdFunc <= 0);

    for(int i = 1; i <= qtdFunc; i++){
        do{
            printf("Informe o valor do salário do %dº funcionário: R$ ", i);
            scanf("%f", &salario);
        }while(salario <= 0);

        totalSal += salario;

        if(salario > maiorSal)
            maiorSal = salario;
        if(salario < menorSal)
            menorSal = salario;
    }
    //Exibição dos resultados
    printf("\nMédia salarial: R$ %.2f\n", totalSal/qtdFunc);
    printf("Maior salário: R$ %.2f\n", maiorSal);
    printf("Menor salário: R$ %.2f\n", menorSal);

    return 0;
}
