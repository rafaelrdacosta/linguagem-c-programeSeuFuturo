#include<stdio.h>
#include<locale.h>

/*Aula 56
   O IMC (Índice de Massa Corporal), pode ser calculado dividindo-se
   o peso da pessoa (em kg) pela altura (h em metros) elevada ao quadrado
   (IMC= m/h2).
   Escreva um programa que leia o peso e a altura de uma pessoa,
   calcule e mostre o IMC e a faixa em que o indivíduo se enquadra de cordo
   com a tabela abaixo:

    IMC                        Interpretação
    Menor que 18,5             Abaixo do peso
    Entre 18,5 e menor que 25  Peso normal
    Entre 25 e menor que 30    Sobrepeso
    Entre 30 e menor que 35    Obesidade grau 1
    Entre 35 e menor que 40    Obesidade grau 2
    Maior ou igual a 40        Obesidade grau 3
*/

int main(){
    setlocale(LC_ALL, "Portuguese");

    //Declaração das variáveis
    float peso, altura, imc;

    //Entrada de dados pelo usuário
    printf("Informe o seu peso (kg): ");
    scanf("%f", &peso);

    printf("Informe a sua altura (m): ");
    scanf("%f", &altura);

    //Cálculo do IMC
    imc = peso/(altura * altura);

    //Exibição do IMC
    printf("\nIMC: %.1f\n", imc);

    //Exibição da interpretação
    if(imc < 18.5)
        printf("Abaixo do peso.\n");
    else if(imc < 25)
        printf("Peso normal.\n");
    else if(imc < 30)
        printf("Sobrepeso.\n");
    else if(imc < 35)
        printf("Obesidade grau 1.\n");
    else if(imc < 40)
    printf("Obesidade grau 2.\n");
    else
    printf("Obesidade grau 3.\n");

    return 0;
}
