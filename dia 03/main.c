/*Escreva um programa em C que solicite um número inteiro positivo N ao usuário e imprima uma contagem regressiva a partir desse número até 0.*/

#include <stdio.h>

int main(){

    int i, a;

    printf("Digite um numero para a contagem regressiva: ");
    scanf("%d", &a);

    for (i = a; i >= 0; i--){
        printf("%d\n", i);
    }

return 0;
}