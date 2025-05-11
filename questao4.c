#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int conteudo;
    struct celula *prox;
} Celula;

int contar(Celula *lista) {
    int count = 0;
    while (lista != NULL) {
        count++;
        lista = lista->prox;
    }
    return count;
}

int* exportarParaVetor(Celula *lista, int *tamanho) {
    *tamanho = contar(lista);
    int *vetor = (int*)malloc((*tamanho) * sizeof(int));
    for (int i = 0; i < *tamanho; i++) {
        vetor[i] = lista->conteudo;
        lista = lista->prox;
    }
    return vetor;
}