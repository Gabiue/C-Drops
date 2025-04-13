/*Escreva um programa em C que:

Defina uma struct chamada Aluno com os campos:

nome (string de até 50 caracteres).

nota1 e nota2 (números reais).

media (número real).

Aloque dinamicamente um vetor de Aluno com base em um número N fornecido pelo usuário (quantidade de alunos).

Solicite ao usuário os dados de cada aluno (nome, nota1, nota2) e calcule a media como a média das duas notas.

Permita que o usuário busque um aluno pelo nome e exiba sua média.

Libere a memória alocada ao final.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nome[50];
    float n1;
    float n2;
    float media;
} Aluno;

int main()
{
    int n, i;
    char busca[50];
    int encontrado = 0;
    Aluno *number;
    int aux;
    char SN;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &n);
    getchar();

    number = malloc(n * sizeof(Aluno));
    if (number == NULL)
    {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("\nDigite o nome do aluno %d: ", i + 1);
        fgets(number[i].nome, 50, stdin);
        number[i].nome[strcspn(number[i].nome, "\n")] = '\0';

        printf("Digite a nota 1 do aluno: ");
        scanf("%f", &number[i].n1);
        printf("Digite a nota 2 do aluno: ");
        scanf("%f", &number[i].n2);
        getchar();
        number[i].media = (number[i].n1 + number[i].n2) / 2;
    }

    do
    {
        encontrado = 0 ;
        printf("\nDigite o nome do aluno que deseja buscar: ");
        fgets(busca, 50, stdin);
        busca[strcspn(busca, "\n")] = '\0';

        for (i = 0; i < n; i++)
        {
            if (strcmp(busca, number[i].nome) == 0)
            {
                printf("Media do aluno %s: %.2f\n", number[i].nome, number[i].media);
                encontrado = 1;
                break;
            } 
           
        }

        if(!encontrado){
            printf("--------------Aluno nao encontrado!-----------------\n");
        }
        

        printf("Deseja fazer outra busca?(S/N): ");
        scanf(" %c", &SN );
        getchar();
        
    } while (SN == 'S' || SN == 's');

        free(number);
    return 0;
}
