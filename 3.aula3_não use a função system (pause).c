#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("Hello World!!\n");

    /*A função system é uma função do Windows
    - Não é necessário utilizar se estiver escrevendo o código em uma IDE
    - Nas IDEs quando é aberto o terminal ao final já aparece a msg:
    Press any key to continue*/
    system("pause");

    /*Quando não estiver utilizando uma IDE você pode colocar uma
    msg no final para o usuário identificar como sair*/
    printf("\nPressione qualquer tecla para finalizar.");
    getchar();

    return 0;
}
