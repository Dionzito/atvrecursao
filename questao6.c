#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int conteudo;
    struct celula *prox;
} Celula;

Celula* concatenarListas(Celula *l1, Celula *l2) {
    if (l1 == NULL) return l2;
    Celula *atual = l1;
    while (atual->prox != NULL)
        atual = atual->prox;
    atual->prox = l2;
    return l1;
}