#include <stdio.h>

int main() {
	int vetor[3] = {1, 5, 8};

	int *ponteiro = &vetor[0];
	printf("%i\n", *ponteiro);
	
	++ponteiro;
	
	printf("%i\n", *ponteiro);
	
	++ponteiro;
	
	printf("%i\n", *ponteiro);
	

	system("pause");
}