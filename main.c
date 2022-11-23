#include <stdio.h>

struct pessoa
{
	int idade;
	float altura;
};

typedef struct pessoa Pessoa;

int main() {

	Pessoa p;

	p.idade =5;
	p.altura = 1.78;

	printf("a altura da pessoa é %.2f e a idade da pessoa é %d", p.altura, p.idade);
  
  return 0;
}