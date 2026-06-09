#include <stdio.h>
#include <stdlib.h>


main(){
	
	int MAX = 5;
	
	struct base{
		int dados[MAX];
		int topo;
	};
	
	struct base Pilha;
	
	Pilha.dados[0] = 1;
	Pilha.dados[1] = 2;
	Pilha.dados[2] = 3;
	Pilha.dados[3] = 4;
	Pilha.dados[4] = 5;
	
	printf("Valor do primeiro: %i\n", Pilha.dados[0]);
	printf("Valor do primeiro: %i\n", Pilha.dados[1]);
	printf("Valor do primeiro: %i\n", Pilha.dados[2]);
	printf("Valor do primeiro: %i\n", Pilha.dados[3]);
	printf("Valor do primeiro: %i\n", Pilha.dados[4]);
}


//estrutura pilha

