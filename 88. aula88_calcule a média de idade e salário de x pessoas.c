#include<stdio.h>
#include<locale.h>

/*Aula 88
    Foi feita uma pesquisa entre os habitantes de uma
    regi�o e foram coletados os dados de idade, sexo (M/F)
    e sal�rio de X pessoas (x deve ser informado pelo
    usu�rio). Fa�a um algoritmo que informe:
a) a m�dia de sal�rio do grupo;
b) a maior e a menor idade do grupo;
c) a quantidade de mulheres com sal�rio at� R$2000,00.
*/

int main(){
    setlocale(LC_ALL, "Portuguese");
    //Declara��o das vari�veis
    int nrHab, idade, menorIdade = 0, maiorIdade = 0, qtdM = 0;
    char sexo;
    float salario, somaSal = 0;

    //Entrada de dados pelo usu�rio
    do{
        printf("\nInforme Nr de habitantes cadastrados: ");
        scanf("%d", &nrHab);
    }while(nrHab <= 0);

    for(int i = 1; i <= nrHab; i++){
        printf("\nDados cadastrais %d� habitante:\n", i);
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
           printf("Sal�rio: R$ ");
           scanf("%f", &salario);
           somaSal += salario;
        }while(salario <= 0);

        if(sexo == 'f' || sexo == 'F' && salario <= 2000)
            qtdM++;
    }
    //Exibi��o do resultado
    printf("\nM�dia salarial: R$ %.2f\n", somaSal / nrHab);
    printf("Maior idade: %d\n", maiorIdade);
    printf("Menor idade: %d\n", menorIdade);
    printf("Mulheres com sal�rio at� R$ 2000.00: %d\n\n", qtdM);

    return 0;
}
