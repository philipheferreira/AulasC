#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


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
