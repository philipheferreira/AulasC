#include <stdio.h>
#include<stdlib.h>
#include<locale.h>

strunct dicionario {
	char palavra[20];
	char definicao[50];
}


bool compararStrings(const char palavra1[], const char palavra2[]) {
	int i = 0;
	while (palavra1[i] == palavra2[i] && palavra1[i] != '\0' && palavra2[i] != '\0') {
		++i;
	}
	
	if (palavra1[i] == '\0' && palavra2[i] == ) {
		return true;
	} else {
		return false;
	}
}

int procurarStrings(const struct dicionario lingua[], const char procurar[], const int numDePalavras) {
	
	bool compararStrings(const char palavra1[], const char palavra2[]);
	
	int i = 0;
	while (i < numDePalavras) {
		
		if() {
			
		}
	}
}