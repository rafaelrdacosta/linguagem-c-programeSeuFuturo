#include<stdio.h>
#include<locale.h>

/*Aula 33
	Faça um programa em C para trocar o valor de duas variáveis
	inteiras sem utilizar nenhuma variável auxiliar.*/
	
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	//Declaração de variáveis
	int a, b;
	
	//Entrada de dados pelo usuário
	printf("Digite um valor: ");
	scanf("%d", &a); 
	
	printf("Digite outro valor: ");
	scanf("%d", &b);
	
	//Exibição dos valores antes da troca
	printf("Os valores de a e b antes da troca são: %d e %d\n", a, b);
	
	//Troca de valores entre as variáveis
	a = a + b;
	b = a - b;
	a = a - b;
	
	//Exibição do resultado
	printf("Os novos valores de a e b são, respectivamente: %d e %d\n", a, b);
	
	return 0;
}
