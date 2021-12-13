#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){ 
setlocale(LC_ALL, "");
int matriz[3][3]= { 9, 8, 7, 6, 5, 4, 3, 2, 1};
int outraMatriz[3][3] = {{1, 2, 3}, 
						 {4, 5, 6},
						 {7, 8, 9}};
						 
int resultSoma[3][3] = {0};
int resultSub[3][3] = {0};
int m, n;

printf("Matriz: \t%i\t%i\t%i\n\t\t%i\t%i\t%i\n\t\t%i\t%i\t%i", matriz[0][0], matriz[0][1], matriz[0][2], matriz[1][0], matriz[1][1], matriz[1][2], matriz[2][0], matriz[2][1], matriz[2][2]);

printf("\n\n");

printf("Segunda matriz:\n\n");
for(m = 0; m < 3; m++){ 
	for(n = 0; n < 3; n++){ 
		printf("%i\t", outraMatriz[m][n]);
	}
	printf("\n\n");
}

printf("\n\nOperações de matrizes:\n\n");

for(m = 0; m < 3; m++){ 
	for(n = 0; n < 3; n++){ 
		resultSoma[m][n] = matriz[m][n] + outraMatriz[m][n];
	}
}

printf("Soma das Matrizes: \n");
for(m = 0; m < 3; m++){ 
	for(n = 0; n < 3; n++){ 
		printf("%i\t", resultSoma[m][n]);
	}
	printf("\n");
}


for(m = 0; m < 3; m++){ 
	for(n = 0; n < 3; n++){ 
		resultSub[m][n] = matriz[m][n] - outraMatriz[m][n];
	}
}

printf("Subtração das Matrizes: \n");

for(m = 0; m < 3; m++){ 
	for(n = 0; n < 3; n++){ 
		printf("%i\t", resultSub[m][n]);
	}
	printf("\n");
}



system("pause");
}
