/*Escreva um programa em C que:

Solicite ao usuário os elementos de uma matriz 3x3 (números inteiros).

Armazene a matriz.

Calcule e imprima a matriz transposta (onde as linhas são convertidas em colunas e vice-versa).*/

#include <stdio.h>

int main (){
    int matriz [3][3];
    int i, j;

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("Digite um numero: ");
            scanf("%d", &matriz[i][j]);
        }
    }

    for(j=0; j<3; j++){
        printf("\n");
        for(i=0; i<3; i++){
            printf("%d ", matriz[i][j]);
    }

    } 
}