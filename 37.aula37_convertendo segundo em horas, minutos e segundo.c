#include<stdio.h>
#include<locale.h>

/*Aula 37
	Fa�a um programa para ler do teclado uma quantidade de segundos
	e imprimir na tela a convers�o para horas, minutos e segundos.*/
	
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	//Declara��o de vari�vel
	int segundos, minutos, horas;
	
	//Entrada de dados pelo usu�rio
	printf("Informe os segundos: ");
	scanf("%d", &segundos);
	
	//Convers�o para horas, minutos e segundos
	horas = segundos / 3600;
	minutos = (segundos % 3600) / 60;
	segundos = segundos % 60;
	
	//Exibi��o do resultado
	printf("Hora: %d:%d:%d\n", horas, minutos, segundos);
	
	return 0;
}
