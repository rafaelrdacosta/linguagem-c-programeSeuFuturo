#include<stdio.h>
#include<locale.h>

/*Aula 37
	Faça um programa para ler do teclado uma quantidade de segundos
	e imprimir na tela a conversão para horas, minutos e segundos.*/
	
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	//Declaração de variável
	int segundos, minutos, horas;
	
	//Entrada de dados pelo usuário
	printf("Informe os segundos: ");
	scanf("%d", &segundos);
	
	//Conversão para horas, minutos e segundos
	horas = segundos / 3600;
	minutos = (segundos % 3600) / 60;
	segundos = segundos % 60;
	
	//Exibição do resultado
	printf("Hora: %d:%d:%d\n", horas, minutos, segundos);
	
	return 0;
}
