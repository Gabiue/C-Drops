 /*Escreva um programa em C que:

Solicite ao usuário um número inteiro não negativo n.

Use uma função recursiva para calcular o n-ésimo número da sequência de Fibonacci.

Imprima o resultado.

*/

#include <stdio.h>
#include <stdlib.h>

int fibonacciInterative(int num){
    int i;
    int aux = 1;
    int aux2 = 0;
    int fibonacci;

    printf("1 ");

    for(i= 0; i <= num; i++){
        fibonacci = aux + aux2;
        aux2 = aux;
        aux = fibonacci;

       printf("%d ", fibonacci);
    }



}


int main (){
    int number;

    printf("Digite a quantidade de numeros desejados na sequencia de firbonnaci(numero positivo maior que 2): ");
    scanf("%d", &number);

    if(number < 3){
        printf("numero invalido!!!");
        return 1;
    }

    fibonacciInterative(number); 

    return 0; 

}
