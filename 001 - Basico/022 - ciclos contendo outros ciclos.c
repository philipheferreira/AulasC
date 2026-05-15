#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
/* 
	Nesse projeto como esta sendo colocado um ciclo dentro de um ciclo, 
	toda vez que o segundo ciclo termina todo o ciclo dele
	o primeiro ciclo pode seguir o proximo ciclo, e o segundo
	ciclo reinicia todo ciclo dele a cada proximo passo do primeiro.
	Quando o primeiro ciclo finalizar todos os passos dele encerrando
	o unico ciclo dele o codigo termina
 */


int main(void) {
	
	for (int i = 1; i <= 10; ++i) {
		printf("**Volta %i**\n", i);
		for (int j = 1; j <= 10; ++j) {
			printf("Ponto %i\n", j);
		}
		printf("\n");
	}
	system("pause");
}