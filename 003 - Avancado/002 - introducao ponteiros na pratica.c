#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Em tese o processo de ponteiro ja ocorre naturalmente mas sem fazermos
nada. Quando criamos uma variavel nos alocamos um tipo de enderecamento
dentro da memoria pra ela ser armazenada com o scanf, mas agora
iremos brincar, mais pra frente com essa caracteristica*/


int main(){ 
	setlocale(LC_ALL, "");
	
	int x;
	x = 10;
	
	int *ponteiro; /* com o sinbolo asteristico define que vai ser criado uma variavel que
	o objetivo vai ser estar apontando para um valor que esta enderecado como
	valor inteiro. Ou seja, eu criei uma variavel do tipo ponteiro que esta
	apontando para algum lugar que ate entao nao foi definido o local a ser
	apontado*/
	ponteiro = &x; /* aqui estou dizendo que a variavel criada como ponteiro
	esta apotando para o endereco de memoria x. Ou seja, qualquer valor 
	dentro do endereco de memoria x agora estara dentro do *ponteiro */
	
	printf("valor dentro de ponteiro: %i\n", *ponteiro);
	
	printf("valor dentro da variavel x: %i\n", x);
	
	/* A variavel x ainda tera o valor dentro dela, mas agora a variavel *ponteiro
	esta apontando para o mesmo endereco de memoria de x, significa que as 
	duas agora tem acesso ao mesmo endereco de memoria e ao mesmo valor */
	
	printf("Endereco de memoria de ponteiro: %i.\n", ponteiro); /* Para mostrar
	o endereco de memoria do ponteiro nao tem que colocar o simbolo. 
	A variavel ponteiro tem a logica de amostragem inversa da de uma variavel 
	normal porque em tese seguimos o fluxo inverso */
	
	printf("Endereco de memoria de x: %i.\n", &x); /* O endereco de x
	sera o mesmo de ponteiro */
	
	system("pause");
}
