#include<stdio.h>
#include<locale.h>

/*Aula 30
	Tabela ASCII e acentua��o
	1 byte (8 bits) -> -128 at� 127
	unsigned 1 byte -> 0 a 255
	
	9 � o caractere de tabula��o \t
	10 � o caractere de nova linha \n (ENTER)
	65 � a letras A mai�scula
	90 � a letra Z mai�scula
	
	1� = setlocale(LC_ALL, NULL); - padr�o linguagem C
	2� = setlocale(LC_ALL, ""); - padr�o do sistema operacional
	3� = setlocale(LC_ALL, "Portuguese"); - portugu�s brasileiro
	*/
	
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("%s\n", setlocale(LC_ALL, "Portuguese"));
	printf("%s\n", setlocale(LC_ALL, ""));
	printf("%s\n", setlocale(LC_ALL, NULL));
	
	printf("Cora��o\n");
	
	char letra = 'f';
	printf("%d\n", letra);
	printf("%c\n", 102);
	printf("%c\n", 103);
	
	return 0;
}
