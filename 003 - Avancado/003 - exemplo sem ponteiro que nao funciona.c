#include<stdio.h>
#include<stdlib.h>
#include<locale.h>




int main(){ 
	setlocale(LC_ALL, "");
	
	int x = 10;
	int y = x;
	
	x = 20;
	
	printf("O valor de x apos a mudanca de valor: %i\n", x);
	
	printf("O valor de y apos a mudanca de valor de x: %i\n", y);
	
	system("pause");
}
