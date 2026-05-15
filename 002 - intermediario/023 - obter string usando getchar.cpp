#include <stdio.h>
#include<stdlib.h>
#include<locale.h>

/* O comando getcha() é uma função padrão da linguagem C que vai na linha de 
comando e pega um caractere. Ou seja, é uma função para pegar um caractere 
na linha de comando */

main() {
	setlocale(LC_ALL, "Portuguese");
	
	char linha[100];
	char caractere;
	int i = 0;
	
	do {
		
		caractere = getchar();
		linha[i] = caractere;
		++i;
	} while (caractere != '\n');
	
	linha[i - 1] = '\0';
	
	printf("%s", linha);

	
}