#include<stdio.h>
#include<locale.h>

/*Aula 35
	Uma empresa contrata um encanador a R$ 45,00 por dia. Fa�a um programa
	que solicite o n�mero de dias trabalhado pelo encanador e imprima a quantia 
	l�quida que dever� ser paga, sabendo que s�o descontados 8% de imposto
	de renda.*/
	
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	//Declara��o de vari�veis
	float pagBruto, pagLiquido, impostoRenda;
	int diasTrab;
	
	//Entrada de dados pelo usu�io
	printf("Informe os dias trabalhados: ");
	scanf("%d", &diasTrab);
	
	//C�lculos dos pagamentos
	pagBruto = diasTrab * 45;
	impostoRenda = 0.08 * pagBruto;
	pagLiquido = pagBruto - impostoRenda;
	
	//Exibi��o dos resultados
	printf("Valor di�rias: R$ %.2f\n", pagBruto);
	printf("Imposto de renda: R$ %.2f\n", impostoRenda);
	printf("Valor a ser pago: R$ %.2f\n", pagLiquido);
	
	return 0;
}
