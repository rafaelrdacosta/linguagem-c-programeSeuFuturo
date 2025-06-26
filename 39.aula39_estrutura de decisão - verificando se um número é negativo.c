#include<stdio.h>
#include<locale.h>

/*Aula 39: Decisão simples
	Verificando se um número é negativo
	Brasília é a capital do Brasil? sim = 1 ou não = 0
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num;
	
	printf("\nDigite um valor qualquer: ");
	scanf("%d", &num);
	
	if(num < 0){
		printf("Valor negativo!\n");
	}
	printf("\nContinuação do programa...\n");
	return 0;
}
