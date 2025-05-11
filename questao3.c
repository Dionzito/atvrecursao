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

Celula* copiarVetor(int v[], int n) {
    Celula *inicio = NULL, *fim = NULL;
    for (int i = 0; i < n; i++) {
        Celula* novo = criar_nodo(v[i]);
        if (inicio == NULL)
            inicio = fim = novo;
        else {
            fim->prox = novo;
            fim = novo;
        }
    }
    return inicio;
}