#include<stdio.h>
#include<locale.h>

/*Aula 40: Decisão completa
	Verificando se um número é negativo*/
	
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("\nDigite um valor qualquer: ");
	scanf("%d", &num);
	
	if(num < 0){
		printf("\n\tValor negativo!\n");
	} else{
		printf("\n\tValor positivo ou igual a zero!\n");
	}
	
	printf("\nContiunação do programa...\n");
	
	return 0;
}
