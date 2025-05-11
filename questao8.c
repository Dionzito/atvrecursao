#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int conteudo;
    struct celula *prox;
} Celula;

int listasIguais(Celula *l1, Celula *l2) {
    while (l1 != NULL && l2 != NULL) {
        if (l1->conteudo != l2->conteudo)
            return 0;
        l1 = l1->prox;
        l2 = l2->prox;
    }
    return (l1 == NULL && l2 == NULL);
}