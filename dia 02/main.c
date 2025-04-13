/*Escreva um programa em C que solicite dois números inteiros ao usuário e determine qual deles é o maior. Se os números forem iguais, o programa deve informar que são idênticos.*/

#include <stdio.h>

int main (){

    int a;
    int b;

    printf("Insira o primeiro numero: ");
    scanf ("%d", &a);

    printf("Insira o segundo numero: ");
    scanf("%d", &b);

    if (a>b){
        printf("%d eh maior que %d! \n", a, b); 

    }else if (a < b) {
        printf("%d eh menor que %d", a , b);

    }
    else {
        printf("Os numeros sao iguais\n");

    }
return 0;

}