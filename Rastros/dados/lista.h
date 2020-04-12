//
// Created by tiago on 07/04/20.
//

#ifndef PROJETO_LISTA_H
#define PROJETO_LISTA_H

typedef struct lista
{
    void * dado;
    struct lista  *prox;
}NodoLista, *LISTA;

// Cria uma lista vazia
LISTA criar_lista();

// Insere um valor na cabeça da lista
LISTA insere_cabeca(LISTA L, void *valor);

// Devolve a cabeça da lista
void *devolve_cabeca(LISTA L);

// Devolve a cauda da lista
LISTA proximo(LISTA L);

// Remove a cabeça da lista (libertando o espaço ocupado) e devolve a cauda
LISTA remove_cabeca(LISTA L);

// Devolve verdareiro se a lista é vazia
int lista_esta_vazia(LISTA L);
int comprimento_lista (LISTA L);

void limpa_lista(LISTA L);

#endif //PROJETO_LISTA_H