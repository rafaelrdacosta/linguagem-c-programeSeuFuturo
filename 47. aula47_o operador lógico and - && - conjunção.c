#include<stdio.h>
#include<locale.h>

/*Aula 47: Operador lógico and - &&
    TABELA VERDADE  a  b  a && b
                    v  v     v
                    v  f     f
                    f  v     f
                    f  f     f
*/

int main(){
    setlocale(LC_ALL, "Portuguese");

    int idade;
    char sexo;

    printf("Digite seu sexo [m ou f]: ");
    scanf(" %c", &sexo);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    /*if(sexo == 'm'){
        if(idade == 18)
          printf("\n\tAlistamento obrigatório\n!");
        else
          printf("\n\tDispensado!\n");
    }else
        printf("\n\tDispensado!\n");*/

    if(sexo == 'm' && idade == 18)
        printf("\n\tAlistamento obrigatório\n!");
    else
        printf("\n\tDispensado!\n");

    return 0;
}
