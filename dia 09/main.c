/*Peça ao usuário o tamanho N de um vetor (inteiro positivo).

Aloque dinamicamente memória para armazenar N números inteiros.

Solicite ao usuário que digite os N elementos do vetor.

Calcule e imprima a soma dos elementos.

Libere a memória alocada ao final.*/
#include <stdio.h>
#include <stdlib.h>

int main (){
    int *v;
    int num_comp, i;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &num_comp);

    v = (int *) malloc(num_comp * sizeof(float));

    for(i=0; i < num_comp; i++){
        printf("Digite o valora para o indice %d do vetor: ", i);
        scanf("%d", &v[i]);

    }

    printf("---------------IMPRIMINDO VALORES DO VETOR-------------------\n");
    for(i=0; i < num_comp; i++){
        printf("%d ", v[i]);

    }

    free(v);
  

    return 0;
    



}