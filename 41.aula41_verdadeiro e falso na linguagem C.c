#include<stdio.h>
#include<locale.h>

/*Aula 41: Verdadeiro e falso na linguagem C
	True = qualquer valor diferente zero
	False = 0
	*/


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("\nDigite um valor qualquer: ");
	scanf("%d", &num);
	
	printf("\nResultado lógico: %d\n", num < 0);
	
	if(num < 0){
		printf("\n\tValor negativo!\n");
	} else{
		printf("\n\tValor positivo ou igual a zero!\n");
	}
	
	printf("\nContiunação do programa...\n");
	
	return 0;
}
