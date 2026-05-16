#include <stdio.h>
#include<stdlib.h>

int main(void) {
	
	int tamanhoString(char string[]);
	char stringUsuario[20];
	
	printf("Digite uma palavra(string): \n");
	scanf("%s", stringUsuario); /* No scanf de uma string nao vai ser */
	
	int num = tamanhoString(stringUsuario);
	
	printf("A string %s possui %i caracteres. \n", stringUsuario, num);
	
	system("pause");
}

int tamanhoString(char string[]){
	int numCaracteres = 0;
	/* Como o elemento\0 existe em todas as palavras em c, mas esta invisivel
	para nos, basta determinar que a leitura do string ocorrera enquanto o valor
	de string for diferente de \0 */
	while(string[numCaracteres] != '\0'){ 
		++numCaracteres;
	}
	
	return numCaracteres;
}