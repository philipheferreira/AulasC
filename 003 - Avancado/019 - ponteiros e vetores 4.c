#include <stdio.h>

/* Estou fazendo a verificacao exclusiva dos enderecos de memoria utilizando o
%p para mostrar a onde esta sendo alocado o endereco */

int main() {
	int vetor[3] = {1, 2, 3};

	int *ponteiro = &vetor[0];
	printf("%p\n", ponteiro);
	
	ponteiro = &vetor[1];
	printf("%p\n", ponteiro);
	
	ponteiro = &vetor[2];
	printf("%p\n\n", ponteiro);

	system("pause");
}