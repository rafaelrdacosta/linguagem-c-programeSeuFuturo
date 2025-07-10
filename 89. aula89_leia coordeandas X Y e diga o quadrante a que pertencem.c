#include<stdio.h>
#include<locale.h>

/*Aula 89
   Escreva um programa para ler as coordenadas (X,Y)
   de uma quantidade indeterminada de pontos no sistema
   cartesiano. Para cada ponto escrever o quadrante a
   que ele pertence. O algoritmo será encerrado quando
   pelo menos uma de duas coordenadas for NULA (nesta
   situação sem escrever mensagem alguma).
Exemplo de entrada:
2 2
3 -2
-8 -1
-7 1
0 2
Exemplo de saída:
primeiro
quarto
terceiro
segundo
*/

int main(){
    int x, y;

    do{
        printf("\nDigite as coordenadas de um ponto (x, y):\n");
        scanf("%d %d", &x, &y);

        if(x != 0 && y != 0){
            if(x > 0 && y > 0)
             printf("Coordenada (%d, %d) -> Primeiro quadrante.\n", x, y);
        else
            if(x < 0 && y > 0)
                printf("Coordenada (%d, %d) -> Segundo quadrante.\n", x, y);
            else
                if(x < 0 && y < 0)
                    printf("Coordenada (%d, %d) -> Terceiro quadrante.\n", x, y);
                else
                    printf("Coordenada (%d, %d) -> Quarto quadrante.\n", x, y);
        }

    }while(x != 0 && y != 0);
     return 0;
}
