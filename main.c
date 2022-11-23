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
};

typedef struct ponto Ponto;

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

	Ponto *p = (Ponto*)malloc(sizeof(Ponto));
	p->x=1;
	p->y=3;

	printf("Ponto = (%.2f, %.2f)",p->x,p->y);
	
  return 0;
}