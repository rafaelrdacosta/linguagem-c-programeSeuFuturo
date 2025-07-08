#include<stdio.h>
#include<locale.h>

/*Aula 84
   Fa�a um programa que calcule a m�dia de sal�rios de uma empresa, pedindo ao usu�rio a
quantidade de funcion�rios e o sal�rio de cada funcion�rio. Ao final, o programa deve imprimir a
m�dia dos sal�rios informados, o sal�rio mais alto e o sal�rio mais baixo.
*/

int main(){
    setlocale(LC_ALL, "Portuguese");

    int qtdFunc;
    float salario, totalSal = 0, maiorSal = 0, menorSal = 99999;

    do{
       printf("\Informe a quantidade de funcion�rios da empresa: ");
       scanf("%d", &qtdFunc);
    }while(qtdFunc <= 0);

    for(int i = 1; i <= qtdFunc; i++){
        do{
            printf("Informe o valor do sal�rio do %d� funcion�rio: R$ ", i);
            scanf("%f", &salario);
        }while(salario <= 0);

        totalSal += salario;

        if(salario > maiorSal)
            maiorSal = salario;
        if(salario < menorSal)
            menorSal = salario;
    }
    //Exibi��o dos resultados
    printf("\nM�dia salarial: R$ %.2f\n", totalSal/qtdFunc);
    printf("Maior sal�rio: R$ %.2f\n", maiorSal);
    printf("Menor sal�rio: R$ %.2f\n", menorSal);

    return 0;
}
