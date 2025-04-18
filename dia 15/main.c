/*Escreva um programa em C que:

Crie uma lista encadeada a partir de números inteiros fornecidos pelo usuário.

Inverta a lista encadeada sem usar uma estrutura auxiliar (como um vetor ou outra lista).

Imprima a lista original e a lista invertida.

Observações:

A entrada termina quando o usuário digitar -1.

A lista deve ser invertida modificando os ponteiros dos nós, não apenas imprimindo em ordem reversa.*/ 

#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int number;
    struct no *prox;

}No;

void inserir_lista(No **lista, int num ){
    No *novo = malloc(sizeof(No));

    if(novo){
        novo->number= num;
        novo->prox = *lista;
        *lista = novo;
    }else
        printf("Erro ao alocar memoria!!!");
}
void print_lista(No *lista){
    printf("-----LISTA COMPLETA-----\n");

    while(lista != NULL){
        printf("%d ", lista->number);
        lista = lista->prox;;
    }

    printf("NULL!!\n");
}






int main(){
    No *lista = NULL;
    int numbers;


    printf("-----------LISTA ENCADEADA------------\n");

    do {
        printf("Digite os numero da lista (digite '-1' para parar): ");
        scanf("%d",&numbers);
        
        if(numbers != -1){
            inserir_lista(&lista, numbers);
        }


    }while(numbers != -1);


    print_lista(lista);

}

