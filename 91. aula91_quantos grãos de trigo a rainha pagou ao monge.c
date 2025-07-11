#include<stdio.h>
#include<math.h>


/*Aula 91
 Uma rainha requisitou os servi�os de um monge e disse-lhe que pagaria qualquer
pre�o. O monge, necessitando de alimentos, indagou � rainha sobre o pagamento,
se poderia ser feito com gr�os de trigo dispostos em um tabuleiro de xadrez
(que possui 64 casas), de tal forma que o primeiro quadro deveria conter apenas
 um gr�o e os quadros subsequentes, o dobro do quadro anterior.
 Crie um programa para calcular o total de gr�os de trigo que o monge recebeu7
*/

int main(){

    int i;
    long double somatorio = 0, inicio = 1;

    for(int i = 1; i <= 64; i++){
        somatorio += pow(2, i - 1);
        __mingw_printf("%d valor: %Lf\n", i, somatorio);
    }

    /*
    somatorio = 1;
    for(i = 2; i <= 64; i++){
        inicio = inicio * 2;
        somatorio += inicio;
        __mingw_printf("%d valor: %Lf\n", i, somatorio);
    }*/

    __mingw_printf("Valor recebido: %Lf graos\n", somatorio);

    return 0;
}
