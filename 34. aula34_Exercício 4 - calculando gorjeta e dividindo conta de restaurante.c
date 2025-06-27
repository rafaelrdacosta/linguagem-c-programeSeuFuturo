#include<stdio.h>
#include<locale.h>

/*Aula 34
	Escreva um programa que leia um valor de despesa de restaurante,
	o valor da gorgeta (em porcentagem) e o número de pessoas para 
	dividir a conta. Imprima o valor que cada um deve pagar.
	Assuma que a conta será dividida igualmente.
	*/
	
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	//Declaração de variáveis
	float valorDespesa, gorgeta, valorPorPessoa;
	int numPessoas;
	
	//Entrada de dados pelo usuário
	printf("Informe o valor da conta: R$ ");
	scanf("%f", &valorDespesa);
	
	printf("Informe a quantidade de clientes: ");
	scanf("%d", &numPessoas);
	
	printf("Qual será o valor da gorgeta: R$ ");
	scanf("%f", &gorgeta);
	
	//Cálculo da conta por pessoa
	valorPorPessoa = (valorDespesa + gorgeta/100*valorDespesa)/numPessoas;
	
	//Exibição do resultado
	printf("Valor da conta por cliente: R$ %.2f", valorPorPessoa);
	
	return 0;
}
