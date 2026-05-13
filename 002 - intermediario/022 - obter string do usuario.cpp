#include <stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char nome[20];
	char sobrenome[20];
	
	printf("Isira seu nome e sobrenome: ");
	scanf("%s %s", &nome, &sobrenome);
	
	printf("o seu nome completo é: %s %s\n", nome, sobrenome);
	
	system("pause");
}

