#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("Hello World!!\n");

    /*A fun��o system � uma fun��o do Windows
    - N�o � necess�rio utilizar se estiver escrevendo o c�digo em uma IDE
    - Nas IDEs quando � aberto o terminal ao final j� aparece a msg:
    Press any key to continue*/
    system("pause");

    /*Quando n�o estiver utilizando uma IDE voc� pode colocar uma
    msg no final para o usu�rio identificar como sair*/
    printf("\nPressione qualquer tecla para finalizar.");
    getchar();

    return 0;
}
