#include <stdio.h>

int main() {
	int vetor[3] = {1, 5, 8};

	int *ponteiro = vetor;
	printf("%i\n", *ponteiro);
	
	*(ponteiro + 1) = 20;
	
	printf("%i\n", vetor[1]); /* Dentro do vetor acessa a posicao que eu preciso */
	
	++ponteiro;
	
	printf("%i\n", *ponteiro); /* Outra forma de chamar seria incrementar um
	valor em ponteiro e chamar o ponteiro com a nova posicao */

	system("pause");
}