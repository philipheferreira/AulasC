#include <stdio.h>

int main() {
	
	char x[100];
	
	fgets(x, 100, stdin); /* A funcao vai ler um vetor de caractere, 
	vai delimitar quantos caracteres a funcao pode ler, 
	o arquivo que vai ser salvo */
	printf("%s", x);
	
	/* O stdin significa standerd input. o objetivo dessa funcao ser ler entrada
	padrao, no caso do pc seria o teclado */
	
	/* Ate aqui em cima consigo criar um sistema de resposta em tempo real */
	
	freopen("C:/Users/phili/Documents/estudo/C/AulasC/003 - Avancado/37-documentoParaExemplo.txt", "r", stdin); /* ainda nao finalizado */
	fgets(x, 100, stdin);
	printf("%s", x);
}