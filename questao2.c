#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int conteudo;
    struct celula *prox;
} Celula;

Celula* buscaIterativa(int x, Celula* lista) {
    while (lista != NULL) {
        if (lista->conteudo == x)
            return lista;
        lista = lista->prox;
    }
    return NULL;
}

Celula* buscaRecursiva(int x, Celula* lista) {
    if (lista == NULL) return NULL;
    if (lista->conteudo == x) return lista;
    return buscaRecursiva(x, lista->prox);
}