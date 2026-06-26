#include <stdio.h>

int main() {
	int vetor[3] = {1, 3, 6};
	int *ponteiro = &vetor[2]; /* Em vez de passar todo o vetor eu posso mostrar
	apenas uma posicao para fazer a verificacao */
	
	printf("%i\n\n", *ponteiro);
	
	system("pause");
}