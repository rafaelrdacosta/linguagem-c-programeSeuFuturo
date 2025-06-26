#include<stdio.h>
#include<locale.h>

/*Aula 34
	Escreva um programa que leia um valor de despesa de restaurante,
	o valor da gorgeta (em porcentagem) e o n�mero de pessoas para 
	dividir a conta. Imprima o valor que cada um deve pagar.
	Assuma que a conta ser� dividida igualmente.
	*/
	
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	//Declara��o de vari�veis
	float valorDespesa, gorgeta, valorPorPessoa;
	int numPessoas;
	
	//Entrada de dados pelo usu�rio
	printf("Informe o valor da conta: R$ ");
	scanf("%f", &valorDespesa);
	
	printf("Informe a quantidade de clientes: ");
	scanf("%d", &numPessoas);
	
	printf("Qual ser� o valor da gorgeta: R$ ");
	scanf("%f", &gorgeta);
	
	//C�lculo da conta por pessoa
	valorPorPessoa = (valorDespesa + gorgeta/100*valorDespesa)/numPessoas;
	
	//Exibi��o do resultado
	printf("Valor da conta por cliente: R$ %.2f", valorPorPessoa);
	
	return 0;
}
