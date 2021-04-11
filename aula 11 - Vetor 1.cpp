#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){ 
setlocale(LC_ALL, "");

int valor[10], i; // lembrando que em termos de posi��o, a primeira posi��o de um vetor � a 0, ent�o a ultima posi��o nesse vetor de tamanho 10 � 9;

valor[1] = 20; // podesse definir uma posi��o de um vetor especifica sem precisar definir todas;
valor[3] = 14;
valor[7] = 31;
valor[8] = 54;
valor[9] = 10;

// valor[10] = {}; // uma outra forma de chamar o vetor para que ele inicie vazio;

printf("o tamanho dos bytes alocados pelo vetor valor �: %i\n", sizeof(valor));

printf("1 posi��o: %i.\n3 posi��o: %i.\n7 posi��o: %i.\n8 posi��o: %i.\n9 posi��o: %i.\n", valor[1], valor[3], valor[7], valor[8], valor[9]); // referente as posi��es utilizadas para imprimir os valores declarados;

printf("\n\n");


for(i = 0; i < 10; i++){ 
	printf("%i Posi��o: %i\n", i, valor[i]); // os valores que n�o foram declarados podem aparecer vazios, sem valor, ou ter algum lixo de memoria quando forem chamadas;
}


system("pause");
}
