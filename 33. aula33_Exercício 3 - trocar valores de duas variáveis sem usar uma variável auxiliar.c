#include<stdio.h>
#include<locale.h>

/*Aula 33
	Fa�a um programa em C para trocar o valor de duas vari�veis
	inteiras sem utilizar nenhuma vari�vel auxiliar.*/
	
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	//Declara��o de vari�veis
	int a, b;
	
	//Entrada de dados pelo usu�rio
	printf("Digite um valor: ");
	scanf("%d", &a); 
	
	printf("Digite outro valor: ");
	scanf("%d", &b);
	
	//Exibi��o dos valores antes da troca
	printf("Os valores de a e b antes da troca s�o: %d e %d\n", a, b);
	
	//Troca de valores entre as vari�veis
	a = a + b;
	b = a - b;
	a = a - b;
	
	//Exibi��o do resultado
	printf("Os novos valores de a e b s�o, respectivamente: %d e %d\n", a, b);
	
	return 0;
}
