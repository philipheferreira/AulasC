#include <stdio.h>

void copiarString(char *copiarDaqui, char *colarAqui){
	
	while(*copiarDaqui != '\0'){ /* Utilizando o caractere nulo para parar
	a copia da string */
		*colarAqui = *copiarDaqui; /* Vai copiando cada caracterer e passando */
		++copiarDaqui; /* Subindo uma posicao do meu vetor */
		++colarAqui; /* Subindo uma posicao do meu vetor */
	}
	*colarAqui = '\0'; /* adicionar manualmente o caracterer nulo pois ele nao ser adicionado
	apos passar o string */
}

int main(void){
	
	void copiarString(char *copiarDaqui, char *colarAqui); /* Essa funcao nao retornar nada */
	
	char string1[] = "Minha string char";
	char string2[20];
	
	copiarString(string1, string2);
	printf("%s\n\n", string2);
	
	system("pause");
	
}