#include<stdio.h>
#include<locale.h>

/*Aula 40: Decis�o completa
	Verificando se um n�mero � negativo*/
	
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
	
	printf("\nContiuna��o do programa...\n");
	
	return 0;
}
