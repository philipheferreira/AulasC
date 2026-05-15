#include <stdio.h>
#include<stdlib.h>
/* && => operador logico que significa e(and);
 || => operador logico que significa ou (or) */
int main(void) {
	int idade;
	
	printf("Sua idade\n");
	scanf("%i", &idade);
	
	if(idade >= 20 && idade <= 40) {
		printf("Deu certo\n");
	} else {
		printf("Nao deu certo\n")
	}
	
	
}