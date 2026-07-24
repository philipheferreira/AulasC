#include <stdio.h>

/* getc pode ser implementado como uma macro ou uma funcao.
   A fgetc nunca sera implementada como uma macro.
   
   Uma das formas de identificar que uma string acabou ser com o caractere
   nulo, que ser \0, entao manualmente ser necessario tirar o caractere nulo */

int main(){
	char x[100];
	
	int i = 0;
	while ((x[i] = fgetc(stdin)) != '\n'){
		++i;
	}
	
	x[i] = '\0';
	
	printf("%s", x);
}