#include<stdio.h>
#include<locale.h>

/*Aula 71
    Escreva um programa que repita a leitura de uma senha até que ela seja válida.
    Para cada leitura de senha informada, escrever a msg "Senha inválida".
    Quando a senha for informada corretamente deve ser impressa a mensagem "Acesso
    Permitido" e o programa deve ser encerrado.
    Considere que a senha correta é o valor 123456.
*/

int main(){
    setlocale(LC_ALL, "Portuguese");

    int senha, senhaValida = 123456;

    do{
        printf("\nDigite sua senha: ");
        scanf("%d", &senha);

        if(senha != senhaValida)
            printf("\nSenha inválida!\n");
        else
            printf("\nAcesso permitido.\n");
    }while(senha != senhaValida);

    return 0;
}
