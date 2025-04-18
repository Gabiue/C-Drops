/*Escreva um programa em C que:

Crie uma lista encadeada a partir de números inteiros fornecidos pelo usuário.

Inverta a lista encadeada sem usar uma estrutura auxiliar (como um vetor ou outra lista).

Imprima a lista original e a lista invertida.

Observações:

A entrada termina quando o usuário digitar -1.

A lista deve ser invertida modificando os ponteiros dos nós, não apenas imprimindo em ordem reversa.*/ 

#include <stdio.h>
#include <stdlib.h>

typedef struct no{

    int valor;
    struct no *prox;

}No;

void inserir_lista(No **lista, int num ){
    No *novo = malloc(sizeof(No));
    if(novo == NULL)
    {
        printf("ERRO AO ALOCAR MEMORIA!!\n");
        return;
    }
    novo->valor = num;
    novo->prox = *lista;   
    *lista = novo;
}

void imprimir_lista(No *lista){
    while(lista != NULL){
        printf("%d->", lista->valor);
        lista = lista->prox;
    }
    printf("NULL!\n");

}

void inverter_lista(No **lista)
{
   No *anterior = NULL;
   No *atual = *lista;
   No *proximo = NULL;

   while(atual != NULL)
   {
    proximo = atual->prox;
    atual->prox = anterior;
    anterior = atual;
    atual = proximo;
   }

   *lista = anterior;   

}


int main (){
    int number;
    No *lista = NULL; 
    printf("------LISTA ENCADEADA 2.0------\n");

    do{

        printf("Digite um numero(digite -1 para parar): ");
        scanf("%d", &number);

        if(number != -1 )
        {
            inserir_lista(&lista, number);
        }
        else
            break;


    }while(number != -1);

    printf("------LISTA NORMAL-------\n");
   imprimir_lista(lista);

   inverter_lista(&lista);

   printf("------LISTA INVERTIDA-----\n");
   imprimir_lista(lista);

   return 0; 


}
