#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){ 
	setlocale(LC_ALL, "");
	
	void testeVariavel(variavelQualquer);
	void testePonteiro(int *pVariavelQualquer);
	int teste = 1;
	int *pTeste = &teste;
	
	testeVariavel(teste);
	testePonteiro(pTeste);
	printf("%i\n", teste);
	
	
	system("pause");
}

void testeVariavel(variavelQualquer){
	++variavelQualquer;
}

void testePonteiro(int *pVariavelQualquer){
	++*pVariavelQualquer;
}

