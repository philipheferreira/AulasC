#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Uma funcao que chama ela mesma, geralmente porque tem 2 saidas de resolucaop diferentes para um mesmo problema com fim de gerar um resoltado */

int funcao( int num){
	if (num == 0) {
	  return 1;
	}
	else {
	  return num * funcao(num -1);
	}
}


int main(){ 
	setlocale(LC_ALL, "");
	
	int num;
    num = 3;
    
    printf("\nfatR(%d) = %d\n", num, funcao(num));
	
	
	system("pause");
}
