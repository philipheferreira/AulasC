#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Um algoritmo que organiza a ordem de elementos dentro de um array, 
caso os elementos estejam desorganziados, ou seja, nao esteja em uma
sequencia decrescente */

void ordermCrescente(int vetor[], int n) {
	int i, j, temporaria;
	
	for(i = 0; i < n; i++) {
		for(j = i + 1; j < n; ++j){
			if(vetor[i] > vetor[j]){
				temporaria = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = temporaria;		
			}
			
		}
	}
}


int main(){ 
	setlocale(LC_ALL, "");
	
	int vetor[10] = {6, 4, 1, 9, 8, 0, 5, 7, 3, 2};
	int i;
	void ordermCrescente(int vetor[], int n);
	
	ordermCrescente(vetor, 10);
	
	for(i = 0; i < 10; ++i) {
		printf("%i", vetor[i]);
	}
	
	
	system("pause");
}

