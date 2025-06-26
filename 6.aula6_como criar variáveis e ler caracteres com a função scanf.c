#include<stdio.h>
#include<locale.h>

/*Aula 6
    Como criar variáveis e ler caracteres com a função scanf
*/

main(){
    setlocale(LC_ALL, "Portuguese");

    char sexo = 's';

    printf("Valor da variável sexo: %c\n", sexo);

    printf("Digite o seu sexo [m/f]: ");
    scanf("%c", &sexo);

    printf("Valor da variável sexo: %c\n", sexo);

    return 0;
}
