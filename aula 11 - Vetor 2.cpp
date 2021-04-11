#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){ 
setlocale(LC_ALL, "");

int valor[10], i;

int vetor[10] = {20, 0 , 30, 2, 0 , 50, 9, 14, 0 , 1};

int resultSoma[10], resultSub[10], resultMult[10];
 


for(i = 0; i < 10; i++){ 
	printf("Digite um valor para a posição %i: ", i);
	scanf("%i", &valor[i]);
}

printf("\n\n");

printf("Vetor colocado pelo usuario: ");
for(i = 0; i < 10; i++){ 
	printf("\t%i", valor[i]);
}

printf("\n\n");

for(i = 0; i < 10; i++){ 
	result[i] = valor[i] + vetor[i];
}

printf("\n\nSoma dos vetores: ");
for(i = 0; i < 10; i++){ 
	printf("\t%i", resultSoma[i]);
}

printf("\n\n");

for(i = 0; i < 10; i++){ 
	result[i] = valor[i] - vetor[i];
}

printf("\n\nSubitração dos vetores: ");
for(i = 0; i < 10; i++){ 
	printf("\t%i", resultSub[i]);
}

printf("\n\n");

for(i = 0; i < 10; i++){ 
	result[i] = valor[i] * vetor[i];
}

printf("\n\nMultiplicação dos vetores: ");
for(i = 0; i < 10; i++){ 
	printf("\t%i", resulMult[i]);
}

printf("\n\n");

system("pause");
}
