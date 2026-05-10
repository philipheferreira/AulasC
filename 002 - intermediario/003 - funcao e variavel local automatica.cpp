#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

/* Ressaltando como eu estou declarando toda a funcao antes do main nao preciso 
declarar ela dentro do main para utiliza-la por isso, entretanto em um codigo
normal seria recomendado fazer isso mesmo assim por padrao de organizacao e boas
praticas. Como na fucao teste eu criei uma variavel local o estado da acao
nao vai ser salvo, entao toda vez a variavel vai entender que ela vai comecar
como 2 e tenho que fazer o processo de novo. Seria diferente se fosse uma variavel
estatica ou global */
	
void teste(void){ 
		
	int variavel = 2;
	variavel *= 2;
		
	printf("%i\n", variavel);
}
	
int main(){ 
	setlocale(LC_ALL, "");
		
	
	teste();
	teste();

		
	system("pause");
}

