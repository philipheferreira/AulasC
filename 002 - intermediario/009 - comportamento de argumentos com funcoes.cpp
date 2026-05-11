#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Aparentemente em C o programa faz um link direto de C com o vetor, diferente
de uma variavel local normal que so se conecta se eu passar toda logica, os
vetores ja fazem essa alocacao no automatico. Fascinante */




int main(){ 
	setlocale(LC_ALL, "");
	
	void funcaoPrint(int variavelDentroDaFuncao,int vetor[]);
	
	int variavelQualquer = 10, vetor[3] = {10};
	
	funcaoPrint(variavelQualquer, vetor);
	
	printf("Variavel int na funcao print = %i \n", variavelQualquer);
	printf("Vetor na funcao print = %i \n\n", vetor[1]);
	
	system("pause");
}

void funcaoPrint(int variavelDentroDaFuncao, int vetor[]) {
	variavelDentroDaFuncao = variavelDentroDaFuncao + 10;
	vetor[1] = 20;
	
	printf("Variavel int na funcao print = %i \n", variavelDentroDaFuncao);
	printf("Vetor na funcao print = %i \n\n", vetor[1]);
}