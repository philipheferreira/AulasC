#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*		##################### Aula 5 - if complexo #########################
	
	Em praticamente todas as situa��es ser�o com o if voc� usara mais de uma situa��o ou condi��es com o if condicional, para que n�o tenha um problema de interferencia com as condi��es com 
	rela��o a cada if devesse colocar um else separando cada if para que seja identificado onde come�a e onde termina cada um deles, pois provavelmente dara erro se n�o tiver, como nas 
	situa��es a baixo 

*/

main(){ 

	setlocale(LC_ALL, "");
	
	int x = 11;

	if(x == 3){ 
	
		printf(" x � igual a 3\n");
		
	}else if((x >= 4 ) && (x < 10)){
		
		printf("x � maior ou igual a 4 e menor que 10\n"); 
		
	}else if((x == 11) || ( x == 14)){ 
	
		printf("o x � o 11 ou o 14\n");
		
	}else{
		
		printf("x n�o � nenhuma das op��es anteriores\n");
		
	}
system("pause");
}
