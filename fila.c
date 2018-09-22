#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

typedef struct no {
  Token token;
  struct no *prox;
} No;

struct fila {
  No *primeiro, *ultimo;
};

Fila* fila_criar() {
	lista *1 = (lista*) malloc(sizeof(lista));
	1->primeiro = NULL;
	return 1;
}

void fila_adicionar(Fila *f, Token t) {
	No *n = (No*) malloc(sizeof(No));
	n ->token = n;
	n ->token = NULL;
	
	if(n->prox != NULL) {
		n->prox->token = n;
	}
	1->n = n;
}

Token fila_remover(Fila *f) {
	if(1->primeiro == NULL){
		printf("lista vazia\n");
		return 0;
	}
}

int fila_vazia(Fila *f) {
	//Implemente
}

void fila_destruir(Fila *f) {
	//Implemente
}

void fila_imprimir(Fila *f) {
	//Implemente
}
