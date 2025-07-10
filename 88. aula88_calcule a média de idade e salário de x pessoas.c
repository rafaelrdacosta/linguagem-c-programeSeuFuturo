#include<stdio.h>
#include<locale.h>

/*Aula 88
    Foi feita uma pesquisa entre os habitantes de uma
    região e foram coletados os dados de idade, sexo (M/F)
    e salário de X pessoas (x deve ser informado pelo
    usuário). Faça um algoritmo que informe:
a) a média de salário do grupo;
b) a maior e a menor idade do grupo;
c) a quantidade de mulheres com salário até R$2000,00.
*/

int main(){
    setlocale(LC_ALL, "Portuguese");
    //Declaração das variáveis
    int nrHab, idade, menorIdade = 0, maiorIdade = 0, qtdM = 0;
    char sexo;
    float salario, somaSal = 0;

    //Entrada de dados pelo usuário
    do{
        printf("\nInforme Nr de habitantes cadastrados: ");
        scanf("%d", &nrHab);
    }while(nrHab <= 0);

    for(int i = 1; i <= nrHab; i++){
        printf("\nDados cadastrais %dº habitante:\n", i);
        do{
           printf("Idade: ");
           scanf("%d", &idade);

           if(i == 1){
               maiorIdade = idade;
               menorIdade = idade;
           } else{
               if(idade > maiorIdade)
                    maiorIdade = idade;
               if(idade < menorIdade)
                    menorIdade = idade;
           }
        }while(idade <= 0 || idade > 150);

        do{
            printf("Sexo [M/F]: ");
            scanf(" %c", &sexo);
        }while(sexo != 'm' && sexo != 'M' && sexo != 'f' && sexo != 'F');

        do{
           printf("Salário: R$ ");
           scanf("%f", &salario);
           somaSal += salario;
        }while(salario <= 0);

        if(sexo == 'f' || sexo == 'F' && salario <= 2000)
            qtdM++;
    }
    //Exibição do resultado
    printf("\nMédia salarial: R$ %.2f\n", somaSal / nrHab);
    printf("Maior idade: %d\n", maiorIdade);
    printf("Menor idade: %d\n", menorIdade);
    printf("Mulheres com salário até R$ 2000.00: %d\n\n", qtdM);

    return 0;
}
