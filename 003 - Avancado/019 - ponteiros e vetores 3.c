#include <stdio.h>

/* Esse ser um metodo que pode ser feito entratanto nao ser o mais eficiente
por criar um ponteiro para armazenar cada valor de um vetor */

int main() {
	int vetor[3] = {1, 3, 6};
	int *ponteiro1 = &vetor[0]; /* Em vez de passar todo o vetor eu posso mostrar
	apenas uma posicao para fazer a verificacao */
	
	printf("%i\n", *ponteiro1);
	
	int *ponteiro2 = &vetor[1];
	printf("%i\n", *ponteiro2);
	
	int *ponteiro3 = &vetor[2];
	printf("%i\n\n", *ponteiro3);
	
	system("pause");
}