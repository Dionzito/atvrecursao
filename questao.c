#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int conteudo;
    struct celula *prox;
} Celula;

int contarSemCabeca(Celula *lista) {
    int count = 0;
    while (lista != NULL) {
        count++;
        lista = lista->prox;
    }
    return count;
}

int contarComCabeca(Celula *cabeca) {
    int count = 0;
    Celula *atual = cabeca->prox;
    while (atual != NULL) {
        count++;
        atual = atual->prox;
    }
    return count;
}
