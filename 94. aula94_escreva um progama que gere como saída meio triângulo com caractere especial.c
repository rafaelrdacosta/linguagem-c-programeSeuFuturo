#include<stdio.h>

/*Aula 94
Escreva um programa que gere a saída abaixo.
Restrições:
→ A instrução “printf” pode ser utilizada no máximo 2 vezes;
→ O \n para saltar linha pode ser utilizado no máximo 2 vezes.
*
**
***
****
*****
******
*******
********

*/

int main(){
    for(int i = 1; i <= 8; i++){
        for(int j = 1; j <= i; j++)
            putchar('*');
        putchar('\n');
    }
    return 0;
}
