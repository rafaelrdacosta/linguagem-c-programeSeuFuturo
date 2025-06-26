#include<stdio.h>
#include<locale.h>

/*Aula 35
	Uma empresa contrata um encanador a R$ 45,00 por dia. Faça um programa
	que solicite o número de dias trabalhado pelo encanador e imprima a quantia 
	líquida que deverá ser paga, sabendo que são descontados 8% de imposto
	de renda.*/
	
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	//Declaração de variáveis
	float pagBruto, pagLiquido, impostoRenda;
	int diasTrab;
	
	//Entrada de dados pelo usuáio
	printf("Informe os dias trabalhados: ");
	scanf("%d", &diasTrab);
	
	//Cálculos dos pagamentos
	pagBruto = diasTrab * 45;
	impostoRenda = 0.08 * pagBruto;
	pagLiquido = pagBruto - impostoRenda;
	
	//Exibição dos resultados
	printf("Valor diárias: R$ %.2f\n", pagBruto);
	printf("Imposto de renda: R$ %.2f\n", impostoRenda);
	printf("Valor a ser pago: R$ %.2f\n", pagLiquido);
	
	return 0;
}
