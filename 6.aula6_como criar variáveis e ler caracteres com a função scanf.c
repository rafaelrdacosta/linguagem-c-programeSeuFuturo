#include<stdio.h>
#include<locale.h>

/*Aula 6
    Como criar vari�veis e ler caracteres com a fun��o scanf
*/

main(){
    setlocale(LC_ALL, "Portuguese");

    char sexo = 's';

    printf("Valor da vari�vel sexo: %c\n", sexo);

    printf("Digite o seu sexo [m/f]: ");
    scanf("%c", &sexo);

    printf("Valor da vari�vel sexo: %c\n", sexo);

    return 0;
}
