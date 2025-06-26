#include<stdio.h>
#include<locale.h>

/*Aula 12
    Ler idade, peso, altura e sexo*/

int main(){
    setlocale(LC_ALL, "Portuguese");

    char sexo;
    int idade;
    float peso, altura;

    printf("Digite idade, peso, altura e sexo[M ou m/F ou f]:\n");
    //acrescentar um espaço antes do %c
    scanf("%d%f%f %c", &idade, &peso, &altura, &sexo);

     printf("\nSexo: %c\nIdade: %d\nPeso: %.1f\nAltura: %.2f\n", sexo, idade, peso, altura);

    return 0;
}
