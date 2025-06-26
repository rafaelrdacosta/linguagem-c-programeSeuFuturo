#include<stdio.h>
#include<locale.h>

/*Aula 30
	Tabela ASCII e acentuação
	1 byte (8 bits) -> -128 até 127
	unsigned 1 byte -> 0 a 255
	
	9 é o caractere de tabulação \t
	10 é o caractere de nova linha \n (ENTER)
	65 é a letras A maiúscula
	90 é a letra Z maiúscula
	
	1ª = setlocale(LC_ALL, NULL); - padrão linguagem C
	2ª = setlocale(LC_ALL, ""); - padrão do sistema operacional
	3ª = setlocale(LC_ALL, "Portuguese"); - português brasileiro
	*/
	
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("%s\n", setlocale(LC_ALL, "Portuguese"));
	printf("%s\n", setlocale(LC_ALL, ""));
	printf("%s\n", setlocale(LC_ALL, NULL));
	
	printf("Coração\n");
	
	char letra = 'f';
	printf("%d\n", letra);
	printf("%c\n", 102);
	printf("%c\n", 103);
	
	return 0;
}
