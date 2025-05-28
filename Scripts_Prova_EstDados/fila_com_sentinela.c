#include <stdio.h>
#include <stdlib.h>

struct no{
    int conteudo;
    struct no *proximo;
};
typedef struct no No;

//Faça um função que insira elementos em uma lista dinamica
void inserirLista(No *inicio, int valor){
    No *novo = (No*) malloc(sizeof(No));
    
    novo->conteudo = valor;
    novo->proximo = NULL;

    No *atual = inicio;
    while(atual->proximo != NULL){
        atual = atual->proximo;
    }
    atual->proximo = novo;
}

//Faça uma função que imprima os elementos de uma lista:
void imprimirLista(No *inicio){
    No *atual = inicio->proximo;
    
    while(atual != NULL){
        printf("No endereco %p: %d;\n", (void*)atual, atual->conteudo);
        atual = atual->proximo;
    }
    if(atual == NULL){
        printf("\naviso!");
    }
}

//Faça uma função que exclua o primeiro elemento de uma lista
void excluirElemento(No *ini){
    if (ini->proximo != NULL) {
        No *atual = ini->proximo;
        ini->proximo = atual->proximo;
        free(atual);
    }
}
//Faça uma função que busque um elemento pelo valor, e retorne um No
No* buscarElemento(No *inicio, int valor){
    if(inicio->proximo != NULL){
        No *atual = inicio->proximo;
        while(atual->proximo != NULL){
            if(atual->conteudo == valor){
                return atual;
            }
            else{
                atual = atual->proximo;
            }
        }
    }
    return NULL;
}

void apagarLista(No *ini){
        No *p = ini->proximo;
        No * atual;
        while (p != NULL) {
            atual = p;
            p = p->proximo;
            free(atual);
        }
        ini->proximo = NULL;
}
int main(){
    No inicio;
    inicio.proximo = NULL;

    inserirLista(&inicio, 16);
    inserirLista(&inicio, 32);
    inserirLista(&inicio, 48);
    imprimirLista(&inicio);

    // No *valor_buscado = buscarElemento(&inicio, 32);
    // printf("\nCelula %p -> %d;\n\n", valor_buscado, valor_buscado->conteudo);
    // excluirElemento(&inicio);
    // excluirElemento(&inicio);
    apagarLista(&inicio);
    imprimirLista(&inicio);
    return 0;
}