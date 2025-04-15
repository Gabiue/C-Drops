/*Solicite ao usuário um vetor de N números inteiros (tamanho máximo 10).

Ordene o vetor usando o algoritmo Bubble Sort.

Conte e exiba:

O número total de trocas realizadas durante a ordenação.

O número de passos completos (passes) necessários para ordenar o vetor.

Imprima o vetor ordenado e as métricas coletadas.*/

#include <stdio.h>

void bubblesort(int n, int vet[n], int *trocas, int *passos)
{
    int i, j, aux;
    *trocas = 0;
    *passos = 0;

    for (i = 0; i < n - 1; i++)
    {
        int houvetroca = 0;
        (*passos)++;

        for (j = 0; j <= n; j++)
        {
            if (vet[j] > vet[j + 1])
            {
                aux = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = aux;
                (*trocas)++;
                houvetroca = 1;
            }
        }

        if (!houvetroca)
        {
            break;
        }
    }
}

int main()
{
    int n, i;
    int vetor[10];
    int trocas, passos;

    printf("Digite o tamanho do vetor(maximo 10): ");
    scanf("%d", &n);

    if (n < 1 || n > 10)
    {
        printf("NUMERO INVALIDO!!!!\n");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("Digite o numero do indice %d : ", i);
        scanf("%d", &vetor[i]);
    }

    printf("\n--- VETOR DESORDENADO ---\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", vetor[i]);
    }

    bubblesort(n, vetor, &trocas, &passos);

    printf("\n\n--- VETOR ORDENADO ---\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", vetor[i]);
    }

    printf("\n\nTrocas Realizada: %d\n", trocas);
    printf("Passos realizados %d\n", passos);

    return 0;
}
