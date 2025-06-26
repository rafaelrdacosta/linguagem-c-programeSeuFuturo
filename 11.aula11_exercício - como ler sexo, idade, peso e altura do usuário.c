#include<stdio.h>
#include<locale.h>

/*Aula 11
    Ler sexo, idade, peso e altura*/

int main(){
    setlocale(LC_ALL, "Portuguese");

    char sexo;
    int idade;
    float peso, altura;

    printf("Digite sexo[M ou m/F ou f], idade, peso e altura:\n");
    scanf("%c%d%f%f", &sexo, &idade, &peso, &altura);

    printf("\nSexo: %c\nIdade: %d\nPeso: %.1f\nAltura: %.2f\n", sexo, idade, peso, altura);

    return 0;
}
