#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){ 
setlocale(LC_ALL, "");

int valor[10], i; // lembrando que em termos de posição, a primeira posição de um vetor é a 0, então a ultima posição nesse vetor de tamanho 10 é 9;

valor[1] = 20; // podesse definir uma posição de um vetor especifica sem precisar definir todas;
valor[3] = 14;
valor[7] = 31;
valor[8] = 54;
valor[9] = 10;

// valor[10] = {}; // uma outra forma de chamar o vetor para que ele inicie vazio;

printf("o tamanho dos bytes alocados pelo vetor valor é: %i\n", sizeof(valor));

printf("1 posição: %i.\n3 posição: %i.\n7 posição: %i.\n8 posição: %i.\n9 posição: %i.\n", valor[1], valor[3], valor[7], valor[8], valor[9]); // referente as posições utilizadas para imprimir os valores declarados;

printf("\n\n");


for(i = 0; i < 10; i++){ 
	printf("%i Posição: %i\n", i, valor[i]); // os valores que não foram declarados podem aparecer vazios, sem valor, ou ter algum lixo de memoria quando forem chamadas;
}


system("pause");
}
