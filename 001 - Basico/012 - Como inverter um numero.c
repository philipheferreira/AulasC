#include <stdio.h>
#include<stdlib.h>

int main(){
	int numero, numeroAlterado;
	
	printf("Por favor, digite o numero inteiro a ser invertido: ");
	scanf("%i", &numero);
	
	// cenario em que eu receber numero positivo
	if (numero >= 0) {
		do {
			numeroAlterado = numero % 10;
			printf("%i", numeroAlterado);
			numero = numero/10;
		} while (numero != 0);
		printf("\n");
	} else 
	
	// cenario em que eu receber numero negativo
	if (numero < 0) {
		numero = numero * -1;
		
		printf("-");
		do {
			numeroAlterado = numero % 10;
			printf("%i", numeroAlterado);
			numero = numero / 10;
		} while (numero != 0);
		printf("\n");
	}
	
	system("pause");
}