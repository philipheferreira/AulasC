#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*		##################### Aula 5 - if complexo #########################
	
	Em praticamente todas as situa��es ser�o com o if voc� usara mais de uma situa��o ou condi��es com o if condicional, para que n�o tenha um problema de interferencia com as condi��es com 
	rela��o a cada if devesse colocar um else separando cada if para que seja identificado onde come�a e onde termina cada um deles, pois provavelmente dara erro se n�o tiver, como nas 
	situa��es a baixo 

*/


/* 

	Dentro dos valores de parametriza��o podem ser utilizados simbolos para poder estabelecer com maior facilidade os parametros a serem seguidos, a baixo est�o alguns deles: 
	
	> : esse � o simbolo maior que. ex: x > y (no caso significa que x � maior que y);
	>=  : esse � o maior ou igual que. ex: x >= y (no caso significa que x � maior ou igual a y); 
	< : esse � o menor que. ex: x < y (no caso significa que x � menor que y)
	<= : esse � o menor ou igual que. ex: x <= y ( no caso x � menor ou igual a y);
	== : esse � o simbulo de igual. ex: x == y (no caso x � igual a y);
	!= : esse � o diferente que. ex: x != y (no caso x � diferente de y);

*/
main(){ 

	setlocale(LC_ALL, "");
	
	int x = 11;

	if(x == 3){ 
	
		printf(" x � igual a 3\n");
		
	}else if((x >= 4 ) && (x < 10)){ // o else deve vir antes do if para separar cada uma das situa��es. Caso o else n�o seja posicionado o codigo n�o funcionara de forma correta
		
		printf("x � maior ou igual a 4 e menor que 10\n"); 
		
	}else if((x == 11) || ( x == 14)){ // dessa forma se pode colocar quantos ifs forem necessarios para o funcionamento da opera��o
	
		printf("o x � o 11 ou o 14\n");
		
	}else{ // o comando else � para todas as situa��es que n�o forem contempladas pelos ifs j� definidos 
		
		printf("x n�o � nenhuma das op��es anteriores\n");
		
	}
system("pause");
}
