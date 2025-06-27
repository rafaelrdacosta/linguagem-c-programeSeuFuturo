#include<stdio.h>
#include<locale.h>

/*Aula 32
	Elabore um algoritmo que receba, por meio do teclado, dois valores, um para
	variável "a" e um para variável "b".
	Em seguida, faça os passos que julgar necessário para que ao final, a
	variável "a" possua o valor que inicialmente estava n "b" e vice-versa.
	Traduza seu algoritmo para a linguagem C e exiba os valores na tela. */
	
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	//Declaração de variáveis
	int a, b, aux;
	
	//Entrada de dados pelo usuário
	printf("Digite um valor: ");
	scanf("%d", &a); 
	
	printf("Digite outro valor: ");
	scanf("%d", &b);
	
	//Exibição dos valores antes da troca
	printf("Os valores de a e b antes da troca são: %d e %d\n", a, b);
	
	//Troca de valores entre as variáveis
	aux = a;
	a = b;
	b = aux;
	
	//Exibição do resultado
	printf("Os novos valores de a e b são, respectivamente: %d e %d\n", a, b);
	
	return 0;
}
