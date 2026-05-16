#include<stdio.h>
#include<stdlib.h>
#include<locale.h>




int main(){ 
	setlocale(LC_ALL, "");
	
	int x = 10;
	int *ponteiro;
	
	ponteiro = &x; /* O endereco de ponteiro esta linkado ao endereco de x */
	
	int y = 20;
	*ponteiro = y; /* o valor dentro de y vai ser o mesmo valor em ponteiro
	que esta linkado ao x que vai ser o mesmo valor de x porque o endereco 
	do ponteiro esta linkado ao endereco de x */
	
	printf("O valor de x apos a mudanca de valor: %i\n", x);
	
	printf("O valor de y apos a mudanca de valor de x: %i\n", y);
	
	system("pause");
}
