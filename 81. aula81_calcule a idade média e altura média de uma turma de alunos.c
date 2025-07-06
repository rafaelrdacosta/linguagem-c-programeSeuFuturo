#include<stdio.h>
#include<locale.h>

/*Aula 81
     Para uma turma de 45 alunos, construa um algoritmo que determine:
a) A idade média dos alunos com menos de 1,70m de altura;
b) A altura média dos alunos com mais de 20 anos.

*/

const int nrAlunos = 45;

int main(){
    setlocale(LC_ALL, "Portuguese");

    int idade, idadeBaixos = 0, quantIdadeBaixos = 0, quantAlturaMaior20 = 0;
    float idadeMedia, alturaMedia, altura, alturaMaior20 = 0;

    for(int i = 0; i < nrAlunos; i++){
       do{
           printf("\nInforme a idade: ");
           scanf("%d", &idade);
       }while(idade <= 0);


        do{
           printf("Informe a altura em m: ");
           scanf("%f", &altura);
        }while(altura <= 0);

      if(altura < 1.7){
            idadeBaixos += idade;
            quantIdadeBaixos ++;
       }

       if(idade > 20){
            alturaMaior20 += altura;
            quantAlturaMaior20 ++;
       }
    }

    idadeMedia = (float) idadeBaixos / quantIdadeBaixos;
    alturaMedia = alturaMaior20 / quantAlturaMaior20;

    printf("\nIdade Média dos alunos com menos de 1.7 de altura: %.2f\n", idadeMedia);
    printf("Altura Média dos alunos com mais de 20 anos: %.2f\n", alturaMedia);

    return 0;
}
