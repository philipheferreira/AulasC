#include <stdio.h>

/* getc pode ser implementado como uma macro ou uma funcao.
   A fgetc nunca sera implementada como uma macro */

int main(){
	char x[100];
	
	x[0] = fgetc(stdin);
	
	printf("%c", x[0]);
}


