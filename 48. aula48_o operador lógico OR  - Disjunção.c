#include<stdio.h>
#include<locale.h>

/*Aula 48: Operador lógico OR ||
    TABELA VERDADE  a  b   a || b
                    v  v      v
                    v  f      v
                    f  v      v
                    f  f      f
*/

int main(){
    setlocale(LC_ALL, "Portuguese");

    int idade;

    printf("Qual a sua idade: ");
    scanf("%d", &idade);

    /*if(idade <= 5)
        printf("Tem direito a gratuidade!\n");
    else{
        if(idade >= 60)
           printf("Tem direito a gratuidade!\n");
        else
           printf("Não tem direito a gratuidade!\n");
    }*/
    if(idade <= 5 || idade >= 60)
        printf("\nTem direito a gratuidade!\n");
    else
        printf("\nNão tem direito a gratuidade!\n");

    return 0;
}
