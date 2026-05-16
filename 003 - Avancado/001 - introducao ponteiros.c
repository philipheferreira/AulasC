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
	
	printf("valor armazenado dentro da variavel: %i\n", x);
	
	printf("valor do endereço de memoria alocado para o armazenamento da variavel x: %i\n", &x);
	
	system("pause");
}
