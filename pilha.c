#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

typedef struct no {
  Token token;
  struct no *prox;
} No;

struct pilha {
  No *primeiro;
};

Pilha* pilha_criar() {
	Pilha *p = (Pilha*) malloc(sizeof(Pilha));
	p->primeiro = NULL;
	return p;
}

void pilha_push(Pilha *p, Token t) {
	No *n = (No *) malloc(sizeof(No));
	n->token = t;
	
	n->prox = p->primeiro;
	p->primeiro = n;
}

Token pilha_pop(Pilha *p) {
	if(p->primeiro == NULL) {
		printf("ERRO! NO PILHA_POP\n");
		return;
	}
	
	Token nToken = p->primeiro->token;
	No *n = p->primeiro;
	
	p->primeiro = p->primeiro->prox;
	free(n);
	return(nToken);
}

Token pilha_primeiro(Pilha *p) {
	if(p->primeiro == NULL) {
		printf("ERRO! NO PILHA_PRIMEIRO\n");
		return;
	}
	Token nToken = p->primeiro->token;
	return(nToken);
}

int pilha_vazia(Pilha *p) {
	if (p->primeiro == NULL) {
		return(1);
	}
	else {
		return(0);
	}
}

void pilha_destruir(Pilha *p) {
	No *n = p->primeiro;
	while (n != NULL) {
		No *excluir = n;
		n = n->prox;
		free(excluir);
	}
	free(p);
}

void pilha_imprimir(Pilha *p) {
	if (p->primeiro == NULL) {
		printf("ERRO! NO PILHA_IMPRIMIR");
		return;
	}
	No *n = p->primeiro;
	while (n != NULL) {
		Token nToken = n->token;
		token_imprimir(nToken);
		n = n->prox;
	}
}
