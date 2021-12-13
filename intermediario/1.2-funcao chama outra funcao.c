#include<stdio.h>
#include<stdlib.h>
#include<locale.h>



int decaimento(int num1){ 
		num1 = num1 - 10;
		return num1;
	}
	
	int funcao(int num1, int num2){ 
		
		int result;
	
	if( num1 == 20){ 
		num1 = decaimento(num1);
		
		result = num1 + num2;
	}else{ 
		result = num1 + num2;
	}
	return result;
	}
	

	int main(){ 
	setlocale(LC_ALL, "");
	int x = 20, y = 10, resultado;
		
	int funcao(int num1, int num2);
	
	resultado = funcao(x, y);
	
	printf("O valor das variaveis pre definidas é %i", resultado);
	
	system("pause");
	}
