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
	Fila *f = (Fila*) malloc(sizeof(Fila));
	f->primeiro = NULL;
	f->ultimo = NULL;
	return f;
}

void fila_adicionar(Fila *f, Token t) {
	No *n = (No*) malloc(sizeof(No));
	n ->token = t;
	n->prox = f->ultimo;
	
	if(f->primeiro == NULL) {
		f->primeiro = n;
	}
	
	f->ultimo = n;
}

Token fila_remover(Fila *f) {
	if(f->primeiro == NULL){
		printf("lista vazia\n");
		return;
	}
}

int fila_vazia(Fila *f) {
	if(f->primeiro == NULL) {
		return 1;
	}
	else {
		return 0;
	}
}

void fila_destruir(Fila *f) {
	free(f);
}

void fila_imprimir(Fila *f) {
	No *n;
	n = f->primeiro;
	
	while(n != NULL) {
		token_imprimir(n->token);
		n = n->prox;
	}
}
