/**
 * Este arquivo pode ser utilizado para criar um teste rápido
 * que permita depurar a função que está atualmente sendo
 * implementada de forma mais simples.
 *
 * Para compilar apenas esse programa, utilize `make main`.
 *
 * Você pode alterar como desejar esse programa, ele não será
 * avaliado pelos testes.
 */

#include <stdio.h>

#include "lista.h"

int main(int argc, char** argv) {
    printf("Hello World!\n");
    return 0;
}

/*lista encadeada NEW*/
Lista *Lista_new(int data_size, void (*free_data)(void *)) {
    Lista *nova = (Lista *) malloc(sizeof(Lista));
    if (nova == NULL) {
        fprintf(stderr, "Erro ao alocar memória\n");
        exit(EXIT_FAILURE);

