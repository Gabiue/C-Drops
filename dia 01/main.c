/*Escreva um programa em C que solicite dois números inteiros ao usuário, calcule a soma deles e imprima o resultado*/

#include <stdio.h>

int main(){
    int a, b;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &a);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &b);

    printf("A soma entre esse dois numero eh: %d\n", a+b);
    
    return 0;
}