#include<stdio.h>
#include<locale.h>

/*Aula 16
	Operador sizeof*/
	
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Tamanho em memória de um int: %d bytes\n", sizeof(int));
	
	//1 Byte = 8 bits -> inteiro = 32 bits de memória
	
	float x = 1.0;
	
	printf("Tamanho de um float na memória: %d bytes\n", sizeof(x));
	
	return 0;
}
