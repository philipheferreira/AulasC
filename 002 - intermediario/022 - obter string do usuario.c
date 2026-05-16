#include <stdio.h>
#include<stdlib.h>
#include<locale.h>

/* O comando getcha() é uma função padrão da linguagem C que vai na linha de 
comando e pega um caractere. Ou seja, é uma função para pegar um caractere na linha de comando */

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char nome[20];
	char sobrenome[20];
	
	printf("Isira seu nome e sobrenome: ");
	scanf("%s %s", &nome, &sobrenome);
	
	printf("o seu nome completo é: %s %s\n", nome, sobrenome);
	
	system("pause");
}

