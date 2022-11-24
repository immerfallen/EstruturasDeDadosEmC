#include <stdio.h>
#include <stdlib.h>

/*struct pessoa
{
	int idade;
	float altura;
};


typedef struct pessoa Pessoa;
*/

/*int *p;

int val = 5;
*/

struct ponto{
float x;
float y;
struct ponto *prox;
};

typedef struct ponto Ponto;

Ponto *listaPontos; // aponta para o início da lista

void addFirst(float x, float y){
	
	Ponto *p = (Ponto*)malloc(sizeof(Ponto));
	p->x=x;
	p->y=y;
	p->prox = listaPontos;
	listaPontos = p;
	
};

void addLast(int x, int y){
	
	Ponto *p = (Ponto*)malloc(sizeof(Ponto));
	p->x=x;
	p->y=y;
	p-> prox = NULL;
	if(listaPontos == NULL){
		listaPontos = p;
	}
	else{
		Ponto *listaAux = listaPontos;
		while(listaAux->prox != NULL){
			listaAux = listaAux->prox;
		}
		listaAux->prox=p;
	}
}

void imprime(Ponto *p){
	
	if(p!=NULL){
		printf("Ponto(%.2f,%.2f)\n",p->x,p->y);
		imprime(p->prox);
	}
};
/*

int potencia(int base, int ep){
	if(ep==1){
		return base;
	}
	return base*potencia(base, ep-1);
}

*/

int main() {
/*
	Pessoa p;

	p.idade =5;
	p.altura = 1.78;

	printf("a altura da pessoa é %.2f e a idade da pessoa é %d", p.altura, p.idade);
  */

 /*p = &val;

	printf("O valor apontado por p é %d", *p );

	*/
/*
	Ponto *p = (Ponto*)malloc(sizeof(Ponto));
	p->x=1;
	p->y=3;

	Ponto *p1 = (Ponto*)malloc(sizeof(Ponto));
	p1->x=67;
	p1->y=9;

	Ponto *p2 = (Ponto*)malloc(sizeof(Ponto));
	p2->x=67;
	p2->y=9;
*/
	/*
	p->prox = p1;
	p1->prox = p2;
	p2->prox = NULL;
*/


/*	int y = potencia(4,4);

printf("%d", y);

	*/

	
	addFirst(1,5);
	addFirst(3,0);
	addFirst(5,3);
	addLast(1,1);
	addLast(8,8);

	Ponto *auxLista = listaPontos;
	imprime(auxLista);
	
  return 0;
}

