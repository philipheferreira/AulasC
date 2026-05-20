#include<stdio.h>
#include<stdlib.h>
#include<locale.h>



int main(){ 
	setlocale(LC_ALL, "");
	
	short x = 2147483647; /* Aqui acontece o overflow (trabsordamento da variavel): Quando a variavel nao tem bits o suficiente para armazenar o valor da variavel */
	short y = - 2147483648; /* Aqui ocorre o underflow, quando o valor seria muito menor que o necessario para armazenar*/
	
	printf("%i\n", x);
	printf("%i\n", y);
	
	system("pause");
}


