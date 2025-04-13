/*Escreva um programa em C que:

Peça ao usuário para digitar uma string (máx. 100 caracteres).

Conte quantas vogais (a, e, i, o, u, maiúsculas ou minúsculas) existem na string.

Imprima o total de vogais encontradas.*/

#include <stdio.h>
#include <string.h>

int vogais (char vogais[100]){
    int i;
    int aux = 0;
    for(i=0; i<=100; i++){
        if(vogais[i] == '\0'){
            break;
        }
        else{
           
         if(vogais[i] == 'a' || vogais[i] == 'e' || vogais[i] == 'i' || vogais[i] == 'o' || vogais[i] == 'u' )
         {
            aux++;
         }
        }
    }
    return aux;
}

int main(){
    char string[100];
    int vogal;

    printf("Digite seu nome: ");
    fgets(string, 100, stdin);

    vogal = vogais(string);
    
    printf("\nSeu nome eh: %s\n", string);
    printf("E possui %d vogais\n",vogal );


}