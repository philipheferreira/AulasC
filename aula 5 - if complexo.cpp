#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


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
