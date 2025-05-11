#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int conteudo;
    struct celula *prox;
} Celula;

Celula* criar_nodo(int valor) {
    Celula* novo = (Celula*)malloc(sizeof(Celula));
    novo->conteudo = valor;
    novo->prox = NULL;
    return novo;
}

Celula* copiarLista(Celula *origem) {
    if (origem == NULL) return NULL;
    Celula *nova = criar_nodo(origem->conteudo);
    Celula *atualNova = nova;
    origem = origem->prox;
    while (origem != NULL) {
        atualNova->prox = criar_nodo(origem->conteudo);
        atualNova = atualNova->prox;
        origem = origem->prox;
    }
    return nova;
}