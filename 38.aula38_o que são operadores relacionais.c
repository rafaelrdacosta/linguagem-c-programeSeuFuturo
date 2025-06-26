#include<stdio.h>

/*Aula 38: Operadores relacionais
	menor que: (a < b)
	maior que: (a > b)
	menor ou igual (a <= b)
	maior ou igual (a >= b)
	igual (a == b)
	diferente (a != b)
*/

int main(){
	int a = 10, b = 20;
	
	//Na linguagem C não existe tipo booleano -> True é 1 / False é 0
	printf("\n\tResultado: %d\n", a < b); //1
	printf("\n\tResultado: %d\n", a > b); //0
	printf("\n\tResultado: %d\n", a <= b); //1
	printf("\n\tResultado: %d\n", a >= b); //0
	printf("\n\tResultado: %d\n", a == b); //0
	printf("\n\tResultado: %d\n", a != b); //1
	
	return 0;
}
