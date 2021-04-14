#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
	setlocale(LC_ALL, "");
	
	int matrizA[3][3] = {0}, matrizB[3][3] = {0}, m, n;
	int matrizSoma[3][3] = {}, matrizSub[3][3] ;
	
	printf("Primeira matriz:\n");
	for(m = 0; m < 3; m++){ 
		for(n = 0; n < 3; n++){ 
			printf("Digite o valor da linha %i coluna %i da matriz: ", m + 1, n + 1);
			scanf("%i", &matrizA[m][n]);
		}	
	}
	
	system("cls");
	
	printf("Segunda Matriz:\n");
	for(m = 0; m < 3; m++){ 
		for(n = 0; n < 3; n++){ 
			printf("Digite o valor da linha %i coluna %i da matriz: ", m + 1, n + 1);
			scanf("%i", &matrizB[m][n]);
		}	
	}
	
	system("cls");
	
	printf("Esse são os valores das matrizes inseridas: \n");
	
	printf("Primeira Matriz:\n");
	for(m = 0; m < 3; m++){ 
		for(n = 0; n < 3; n++){ 
			printf("%i\t", matrizA[m][n]);
		}	
		printf("\n");
	}
	
	printf("\nSegunda Matriz:\n");
	for(m = 0; m < 3; m++){ 
		for(n = 0; n < 3; n++){ 
			printf("%i\t", matrizB[m][n]);
		}	
		printf("\n");
	}
	
	
	printf("Operações de soma e subtração com as matrizes inseridas: \n");
	
	//Operação soma de matrizes
	
	for(m = 0; m < 3; m++){ 
		for(n = 0; n < 3; n++){ 
			matrizSoma[m][n] = matrizA[m][n] + matrizB[m][n];
		}	
	}
	
	printf("Soma da primeira com a segunda matriz: \n");
	
	for(m = 0; m < 3; m++){ 
		for(n = 0; n < 3; n++){ 
			printf("%i\t", matrizSoma[m][n]);
		}	
		printf("\n");
	}
	
	//Operação subtração de matrizes
	
	for(m = 0; m < 3; m++){ 
		for(n = 0; n < 3; n++){ 
			matrizSub[m][n] = matrizA[m][n] - matrizB[m][n];
		}	
	}
	
	printf("Subtração da primeira com a segunda matriz:\n");
	
	for(m = 0; m < 3; m++){ 
		for(n = 0; n < 3; n++){ 
			printf("%i\t", matrizSub[m][n]);
		}	
		printf("\n");
	}
	
	system("pause");
}
