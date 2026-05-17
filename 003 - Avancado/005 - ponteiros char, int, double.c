#include<stdio.h>
#include<stdlib.h>
#include<locale.h>




int main(){ 
	setlocale(LC_ALL, "");
	
	int valorInteiro = 10;
	double valorDouble = 20.50;
	char valorCaracter = 'a';
	
	/* Segunda chamada pratica de ponteiros, a que e comumente usada. Ao inves
	de utilizar uma unica chamada de 2 passos, esse so tem uma chamada, declarando
	ponteiro e apontando ponteiro ao endereco da variavel inteira */
	
	int *pInteiro = &valorInteiro;
	double *pDouble = &valorDouble;
	char *pCaracter = &valorCaracter;
	
	printf("Endereco alocado para pInteiro: %i.\n\nO valor de pInteiro: %i.\n\n", pInteiro, *pInteiro);
	printf("Endereco alocado para pDouble: %i.\n\nO valor de pDouble: %.3f\n\n", pDouble, *pDouble);
	printf("Endereco alocado para pCaracter: %i.\n\nO valor de pCaracter: %c\n\n", pCaracter, *pCaracter);
	
	
	system("pause");
}
