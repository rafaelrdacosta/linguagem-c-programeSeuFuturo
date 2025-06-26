#include<stdio.h>
#include<locale.h>

/*Aula 36
	Crie um programa em C que permita fazer a conversão
	cambial entre Reais e Dólares. Considere como taxa
	de câmbio US$ 1 = R$ 5.30. Leia o valor em Reais e 
	mostre o correspondente em dólares.*/
	
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	//Declaração de variáveis
	float valorReais, valorDolar;
	
	//Entrada de dados pelo usuário
	printf("Informe o valor para o câmbio: R$ ");
	scanf("%f", &valorReais);
	
	//Câmbio
	valorDolar = valorReais / 5.30;
	
	//Exibição do resultado
	printf("Valor recebido: R$ %.2f\n", valorReais);
	printf("Câmbio: US$ %.2f\n", valorDolar);
	
	return 0;
}
