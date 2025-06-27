#include<stdio.h>
#include<locale.h>

/*Aula 17
	Operador short pra o tipo int
	intervalo: -32.768 até 32.767
	%hi ou %d*/
	
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int y = 0;
	short int x = 32767;
	
	printf("Tamanho de um int na memória: %d bytes\n", sizeof y);
	printf("Tamanho de um short int na memória: %d bytes\n", sizeof x);
	
	printf("Valor de x: %d\n", x);
	x++;
	printf("Valor de x: %hi\n", x);
	return 0;
}
