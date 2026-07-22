#include <stdio.h> /* A utilizacao da biblioteca para fazer a verificacao
corre no periodo do pre processamento */
#define SIM 100 /* O pre processamento verifica no nosso codigo e muda o 
SIM por 100 dentro do nosso codigo. Isso ocorre antes do programa ser 
processado, por isso o #define ocorre no pre processamento */
#define NAO -100

/* Utilizando o pre processamento */

/*
ciclo de vida em c ou etapas da compilacao em c:
pre processamento
compilacao
montagem/assembly
linking

 */

int main(void){
	
	int x;
	printf("Digite um numero inteiro: ");
	scanf("%i", &x);
	
	if(){
		printf("%i", NAO);
		
	}else {
		printf("%i", SIM);
	}
	
	
	system("pause");
	return 0;
}