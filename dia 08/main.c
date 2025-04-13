/*Escreva um programa em C que:

Declare duas variáveis inteiras a e b.

Peça ao usuário para digitar os valores de a e b.

Use uma função trocar que recebe dois ponteiros para inteiros e troca os valores das variáveis apontadas por eles.

Imprima os valores de a e b antes e depois da troca.*/


#include <stdio.h>


void trocar(int *a, int *b){

    int temp = *a;
    *a = *b;
    *b = temp;
    
    

}


int main (){

    int a, b;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &a); 

    printf("Digite o segundo numero: ");
    scanf("%d", &b); 

    printf("Numeros normais: %d e %d", a, b);

    trocar(&a, &b);

    printf("Numeros invertidos: %d e %d", a, b);


    return 0;



}
