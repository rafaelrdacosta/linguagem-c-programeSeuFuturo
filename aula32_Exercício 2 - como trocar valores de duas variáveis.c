#include<stdio.h>
#include<locale.h>

/*Aula 32
	Elabore um algoritmo que receba, por meio do teclado, dois valores, um para
	vari�vel "a" e um para vari�vel "b".
	Em seguida, fa�a os passos que julgar necess�rio para que ao final, a
	vari�vel "a" possua o valor que inicialmente estava n "b" e vice-versa.
	Traduza seu algoritmo para a linguagem C e exiba os valores na tela. */
	
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	//Declara��o de vari�veis
	int a, b, aux;
	
	//Entrada de dados pelo usu�rio
	printf("Digite um valor: ");
	scanf("%d", &a); 
	
	printf("Digite outro valor: ");
	scanf("%d", &b);
	
	//Exibi��o dos valores antes da troca
	printf("Os valores de a e b antes da troca s�o: %d e %d\n", a, b);
	
	//Troca de valores entre as vari�veis
	aux = a;
	a = b;
	b = aux;
	
	//Exibi��o do resultado
	printf("Os novos valores de a e b s�o, respectivamente: %d e %d\n", a, b);
	
	return 0;
}
