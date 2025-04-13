/*Escreva um programa em C que:

Criptografe ou descriptografe um arquivo de texto usando a Cifra de César (deslocamento de caracteres por uma chave numérica).

O usuário deve escolher entre criptografar ou descriptografar, informar o nome do arquivo de entrada, o nome do arquivo de saída e a chave (número inteiro).

O programa deve ler o arquivo de entrada, aplicar a transformação e salvar o resultado no arquivo de saída.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void criptografar(char mensagem[], int chave)
{
    int i = 0;
    while (mensagem[i] != '\0')
    {
        if (mensagem[i] >= 'a' && mensagem[i] <= 'z')
        {
            mensagem[i] = ((mensagem[i] - 'a' + chave) % 26) + 'a';
        }
        else if (mensagem[i] >= 'A' && mensagem[i] <= 'Z')
        {
            mensagem[i] = ((mensagem[i] - 'A' + chave) % 26) + 'A';
        }
        i++;
    }
}

void descriptografar(char mensagem[], int chave)
{
    int i = 0;
    while (mensagem[i] != '\0')
    {
        if (mensagem[i] >= 'a' && mensagem[i] <= 'z')
        {
            mensagem[i] = ((mensagem[i] - 'a' - chave + 26) % 26) + 'a';
        }
        else if (mensagem[i] >= 'A' && mensagem[i] <= 'Z')
        {
            mensagem[i] = ((mensagem[i] - 'A' - chave + 26) % 26) + 'A';
        }
        i++;
    }
}

int main()
{
    int aux;
    char arq_entrada[50];
    char arq_saida[50];
    FILE *mensagem_arq;
    char word[50];
    int rot;

    printf("Digite 1 - Para criptografar || 2 - Para Descriptografar: ");
    scanf("%d", &aux);
    getchar();

        printf("Digite o nome do arquivo de entrada(nao esqueca o tipo de arquivo .txt ...): ");
        fgets(arq_entrada, 50, stdin);
        arq_entrada[strcspn(arq_entrada, "\n")] = '\0';

        printf("Digite a chave(quantidade de rotacao): ");
        scanf("%d", &rot);
        getchar();

        mensagem_arq = fopen(arq_entrada, "r");
        if (mensagem_arq == NULL)
        {
            printf("Erro na abertura do arquivo!");
            return 1;
        }
        fgets(word, sizeof(word), mensagem_arq );
        word[strcspn(word, "\n")] = '\0';

        fclose(mensagem_arq);

        printf("Digite o nome do arquivo de saida (nao esqueca o .txt): ");
        fgets(arq_saida, 50, stdin);
        arq_saida[strcspn(arq_saida, "\n")] = '\0';

        mensagem_arq = fopen(arq_saida, "w");
        if (mensagem_arq == NULL)
        {
            printf("Erro na abertura do arquivo!");
            return 1;
        }
        if(aux == 1){
            criptografar(word, rot);
        }
        else if(aux == 2){
            descriptografar(word, rot);
        }

        fprintf(mensagem_arq, "%s", word);
        fclose(mensagem_arq);

    return 0;
    
}