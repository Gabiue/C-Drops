/*Crie uma função chamada ehPrimo que recebe um número inteiro e retorna 1 se o número for primo ou 0 caso contrário.

No main(), peça ao usuário um número inteiro positivo.

Use a função ehPrimo para verificar se o número é primo e imprima o resultado.*/


#include <stdio.h>

int ehPrimo (int a){
    int i;

    if (a < 2){
        return 0;
    }
    for (i = 2; i<a; i++){
        if(a % i == 0){
            return 0;
        }
    }


    return 1;
    
}

int main (){
    int number;

    printf("Verificador de numeros primos\n");

    printf ("Digite o numero desejado: ");
    scanf("%d", &number);

    if(ehPrimo(number) == 1){
        printf("O numero eh primo\n");
    }
    else{
        printf("O numero nao eh primo\n");
    }

    return 0;
}