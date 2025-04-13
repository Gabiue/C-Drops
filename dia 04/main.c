/*Peça ao usuário o tamanho de um vetor (N, onde 1 ≤ N ≤ 10).

Solicite ao usuário que digite os N números inteiros do vetor.

Calcule e imprima a soma de todos os elementos do vetor.*/

#include <stdio.h>

int main()
{

    int i;
    int aux;
    int soma = 0;

    printf("Digite o tamanho do vetor(1-10): ");
    scanf("%d", &aux);

    if (aux < 0 || aux > 10){
        printf("O numero deve ser maior que 0 e menor que 10");
        return 1;
    }

    int a[aux];

    for (i = 0; i < aux; i++)
    {
        printf("Digite o numero do indice [%d]", i);
        scanf("%d", &a[i]);
        soma = a[i] + soma;
    }

    for (i = 0; i < aux; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nA soma eh: %d\n", soma);

    return 0;
}
