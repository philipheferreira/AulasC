#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Realizar operacao simples com ponteiro sendo passado pelo parametro. Isso
faz com que tenha uma economia a longo prazo de quanto de memoria sera alocada
e reutilizada em cada chamada dentro da operacao. Em vez de pegar 100mb para
a memoria ram eu estou utilizando apenas o ponteiro para ter uma economia
de memoria alocada */

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

