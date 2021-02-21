#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*		##################### Aula 5 - if complexo #########################
	
	Em praticamente todas as situações serão com o if você usara mais de uma situação ou condições com o if condicional, para que não tenha um problema de interferencia com as condições com 
	relação a cada if devesse colocar um else separando cada if para que seja identificado onde começa e onde termina cada um deles, pois provavelmente dara erro se não tiver, como nas 
	situações a baixo 

*/

main(){ 

	setlocale(LC_ALL, "");
	
	int x = 11;

	if(x == 3){ 
	
		printf(" x é igual a 3\n");
		
	}else if((x >= 4 ) && (x < 10)){
		
		printf("x é maior ou igual a 4 e menor que 10\n"); 
		
	}else if((x == 11) || ( x == 14)){ 
	
		printf("o x é o 11 ou o 14\n");
		
	}else{
		
		printf("x não é nenhuma das opções anteriores\n");
		
	}
system("pause");
}
