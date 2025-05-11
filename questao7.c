#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int conteudo;
    struct celula *prox;
} Celula;

Celula* inverterLista(Celula *lista) {
    Celula *anterior = NULL, *atual = lista, *proximo = NULL;
    while (atual != NULL) {
        proximo = atual->prox;
        atual->prox = anterior;
        anterior = atual;
        atual = proximo;
    }
    return anterior;
}