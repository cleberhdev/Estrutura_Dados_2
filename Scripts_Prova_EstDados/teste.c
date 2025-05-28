#include <stdio.h>
#include <stdlib.h>

struct no{
    int conteudo;
    struct no *proximo;
};
typedef struct no No;

void exibir(No *inicio){
    No *p;
    for(p = inicio->proximo; p != NULL; p = p->proximo){
        printf("Celula %p -> %d;\n", p, p->conteudo);
    }
}
void excluir(No *ini){
    if (ini->prox != NULL) {
        No *atual = ini->prox;
        ini->prox = atual->prox;
        free(atual);
    }
}

void inserirFila(No **ini, int valor){
    No *novo = (No*) malloc(sizeof(No));
    novo->conteudo = valor;
    novo->proximo = NULL;
    if(*ini == NULL){
        *ini = novo;
    }else{
        No *p = *ini;
        while (p->proximo != NULL)
        {
            p = p->proximo;
        }
        p->proximo = novo;
    }
} 
void excluirElementoFila(No **ini){
    if(*ini != NULL){
        No *remover = *ini;
        *ini = remover->proximo;
        free(remover);
    }
    else{
        printf("Lista Vazia!");
    }
}

void apagarFila(No **ini){
    if(*ini != NULL){
        No *p;
        for(p = *ini; p != NULL; p = p->proximo){
            No *elemento_removido = *ini;
            *ini = elemento_removido->proximo;
            free(elemento_removido);
        }
    }else{
        printf("Fila Vazia!\n");
    }
}

int main(){
    No *inicio = NULL;
    inserirFila(&inicio, 15);
    inserirFila(&inicio, 20);
    inserirFila(&inicio, 25);

    exibir(inicio);

    excluir(&inicio);
    printf("\n");
    exibir(inicio);

    // apagarFila(&inicio);
    // printf("\n");
    // exibir(inicio);
    return 0;
}