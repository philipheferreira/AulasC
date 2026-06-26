#include <stdio.h>

int main() {
	int vetor[3] = {1, 2, 3};
	int *ponteiro = vetor; /* coloca todo o vetor dentro de ponteiro. O ponteiro
	seleciona a primeira posicao para a mostragem. */
	
	printf("%i\n\n", *ponteiro);
	
	system("pause");
}