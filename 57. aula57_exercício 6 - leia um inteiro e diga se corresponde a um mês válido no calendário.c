#include<stdio.h>
#include<locale.h>

/*Aula 57
    Faça um programa para ler um número inteiro e verificar se
    corresponde a um mês válido no calendário. Caso corresponda,
    escrever o nome do mês, caso contrário, escrever a mensagem ‘Mês
Inválido’.
*/

int main(){
    setlocale(LC_ALL, "Portuguese");

    //Declaração de variáveis
    int num;

    //Entrada de dados pelo usuário
    printf("Digite o número correspondente ao mês: ");
    scanf("%d", &num);

    //Verificação e exibição do mês
    //Pode ser feito também com switch/case
    if (num >= 1 && num <=12){
        if(num == 1)
            printf("\nMês: Janeiro.\n");
        else if(num == 2)
             printf("\nMês: Fevereiro.\n");
        else if(num == 3)
            printf("\nMês: Março.\n");
        else if(num == 4)
            printf("\nMês: Abril.\n");
        else if(num == 5)
            printf("\nMês: Maio.\n");
        else if(num == 6)
            printf("\nMês: Junho.\n");
        else if(num == 7)
            printf("\nMês: Julho.\n");
        else if(num == 8)
            printf("\nMês: Agosto.\n");
        else if(num == 9)
            printf("\nMês: Setembro.\n");
        else if(num == 10)
            printf("\nMês: Outubro.\n");
        else if(num == 11)
            printf("\nMês: Novembro.\n");
        else if(num == 12)
            printf("\nMês: Dezembro.\n");
    }else
        printf("\nMês inválido!\n");

    return 0;
}
