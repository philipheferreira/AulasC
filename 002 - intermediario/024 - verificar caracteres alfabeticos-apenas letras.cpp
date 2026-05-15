#include <stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Consegue identificar quando vai ser um valor do tipo char e quando vai receber 
que nao vai ser char */

main() {
	setlocale(LC_ALL, "Portuguese");
	
	void alfabetico(char variavel);
	
	char nome[20];
	printf("Digite uma ");
	scanf("%s", nome);
	
	int i = 0;
	while(nome[i] != '\0'){
		alfabetico(nome[i]);
		++i;
	}
	
	system("pause");
}

void alfabetico(char variavel){
	if((variavel >= 'a' && variavel <= 'z') ||
	    (variavel >= 'A' && variavel <= 'Z')) {
			printf("O valor %c é uma letra.\n", variavel);
		} else {
			printf("O valor digitado não e uma letra.\n");
		}
}