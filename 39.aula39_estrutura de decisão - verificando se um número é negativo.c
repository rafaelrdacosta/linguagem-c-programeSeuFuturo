#include<stdio.h>
#include<locale.h>

/*Aula 39: Decis�o simples
	Verificando se um n�mero � negativo
	Bras�lia � a capital do Brasil? sim = 1 ou n�o = 0
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num;
	
	printf("\nDigite um valor qualquer: ");
	scanf("%d", &num);
	
	if(num < 0){
		printf("Valor negativo!\n");
	}
	printf("\nContinua��o do programa...\n");
	return 0;
}
