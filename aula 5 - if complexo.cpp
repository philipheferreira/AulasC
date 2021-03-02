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
		
	}else if((x >= 4 ) && (x < 10)){ // o else deve vir antes do if para separar cada uma das situações. Caso o else não seja posicionado o codigo não funcionara de forma correta
		
		printf("x é maior ou igual a 4 e menor que 10\n"); 
		
	}else if((x == 11) || ( x == 14)){ // dessa forma se pode colocar quantos ifs forem necessarios para o funcionamento da operação
	
		printf("o x é o 11 ou o 14\n");
		
	}else{ // o comando else é para todas as situações que não forem contempladas pelos ifs já definidos 
		
		printf("x não é nenhuma das opções anteriores\n");
		
	}
system("pause");
}
