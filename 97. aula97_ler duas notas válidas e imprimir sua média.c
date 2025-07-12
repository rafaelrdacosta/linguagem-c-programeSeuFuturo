#include<stdio.h>
#include<locale.h>

/*Aula 97
     Escreva um programa para ler as notas da primeira e da
     segunda avalia��o de um aluno. Calcule e imprima a
     m�dia semestral. O programa dever� aceitar apenas notas
     v�lidas no intervalo [0,10]. Cada nota deve ser validada
     separadamente. Ao final, deve ser impressa a mensagem
     �novo calculo? (1-sim 2-nao)�, solicitando ao usu�rio que
     informe um c�digo (1 ou 2), indicando se ele deseja ou n�o
     executar o programa novamente. Se for informado o c�digo 1,
     deve ser repetida a execu��o de todo o programa para permitir
     um novo c�lculo, se for informado o c�digo 2 o programa deve
      ser encerrado.
*/

int main(){
    setlocale(LC_ALL, "Portuguese");

    float nota1, nota2;
    int opcao;

    do{
        do{
           printf("\nDigite a 1� nota: ");
           scanf("%f", &nota1);
        }while(nota1 < 0 || nota1 > 10);

        do{
           printf("Digite a 2� nota: ");
           scanf("%f", &nota2);
        }while(nota2 < 0 || nota2 > 10);

        printf("\nM�dia semestral: %.2f\n\n", (nota1 + nota2) / 2);

        printf("Novo c�lculo?\n1 - Sim\n2 - N�o\nDigite a op��o: ");
        scanf("%d", &opcao);

    }while(opcao == 1);

    return 0;
}
