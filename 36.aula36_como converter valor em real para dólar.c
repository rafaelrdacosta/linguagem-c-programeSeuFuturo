#include<stdio.h>
#include<locale.h>

/*Aula 36
	Crie um programa em C que permita fazer a convers�o
	cambial entre Reais e D�lares. Considere como taxa
	de c�mbio US$ 1 = R$ 5.30. Leia o valor em Reais e 
	mostre o correspondente em d�lares.*/
	
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	//Declara��o de vari�veis
	float valorReais, valorDolar;
	
	//Entrada de dados pelo usu�rio
	printf("Informe o valor para o c�mbio: R$ ");
	scanf("%f", &valorReais);
	
	//C�mbio
	valorDolar = valorReais / 5.30;
	
	//Exibi��o do resultado
	printf("Valor recebido: R$ %.2f\n", valorReais);
	printf("C�mbio: US$ %.2f\n", valorDolar);
	
	return 0;
}
