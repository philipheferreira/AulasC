#include <stdio.h>
#include<stdlib.h>

/* Formas de declarar as strings dentro da programacao. Definir chamadas
diferentes de strings. 
A palavra1 usa da forma que sempre utilizamos, entre parenteses, declarando
e concatenado cada palavra em vetores, em que o vetor foi pre definido
com 6 espacos.
a palavra2 nao foi pre definido o tamanho do vetor mas esta recebendo cada
caracter concatenado e declarado separadamente entre parenteses.
a palavra3 a palavra foi declarada agora como a forma escrita e o vetor
foi predefinido o espaco entre os parenteses. 
a palavra4 nao foi definido um tamanho para o vetor string e o brasil foi 
declarado como uma palavra qualquer, sendo que ainda esta entre chaves
a palavra5 o vetor string nao foi predefinido, brasil esta declarado como
uma palavra e sem as chaves*/

int main(void) {
	
	
	char palavra1[6] = {'B', 'r', 'a', 's', 'i', 'l'};
	char palavra2[] = {'B', 'r', 'a', 's', 'i', 'l'};
	char palavra3[7] = {"Brasil"};
	char palavra4[] = {"Brasil"};
	char palavra5[] = "Brasil";
	
	
	system("pause");
}
