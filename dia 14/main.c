 /*Escreva um programa em C que:

Solicite ao usuário um vetor ordenado (crescente) de N números inteiros.

Solicite um número alvo (target) para busca.

Implemente o algoritmo de busca binária para encontrar o índice do target no vetor.

Conte e exiba o número de passos (comparações) realizados até encontrar o elemento ou concluir que ele não existe.

Imprima o resultado da busca e o número de passos.*/

#include <stdio.h>

void verificadorVet(int vet[], int number, int *verificador){
    int i;
    
    *verificador = 1;
    
    for(i=0; i< number - 1; i++){
        if(vet[i] > vet[i+1]){
            *verificador = 0;
            break;
        }
    }
}

void targetVet(int vet[], int number, int *passos, int *target, int numTarget){
    int inicio = 0, fim = number - 1, meio;
    *passos = 0;
    *target = -1;

    while (inicio <= fim) {
        (*passos)++;
        meio = (inicio + fim) / 2;

        if (vet[meio] == numTarget) {
            *target = meio;
            return;
        } else if (vet[meio] < numTarget) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }
}

int main (){

    int verificador = 0, passos;
    int target, numTarget;
    int i, n;
    int vetor[10];

    printf("------------BUSCA EM VETOR------------\n");

    printf("Digite o tamanho do vetor(maximo 10): ");
    scanf("%d", &n);

    if(n<1 || n >10 ){
        printf("NUMERO INVALIDO!!!! TENTE NOVAMENTE\n");
        return 1;
    }

    printf("DIGITE O VETOR DE FORMA ORDENADA!!\n");

    for(i=0; i < n; i++){
        printf("Digite o numero do indice %d: ",i);
        scanf("%d", &vetor[i]);
    }
    verificadorVet(vetor, n, &verificador);

    if(!verificador){
        printf("VETOR NAO ORDENADO!!!!\n");
        return 1;
    }

    printf("Digite o numero que deseja buscar: ");
    scanf("%d", &numTarget);

    targetVet(vetor, n, &passos, &target, numTarget);

    if(target == -1){
        printf("NUMERO NAO ENCONTRADO !!!!!\n");
        return 1;
    }

    printf("O numero %d esta no indice %d \n", numTarget, target);
    printf("Numero de passos (comparacoes): %d\n", passos);

    return 0;


}