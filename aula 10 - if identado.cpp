#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){ 
setlocale(LC_ALL, "");
int x; 

printf("Digite o valor de X: ");
scanf("%i", &x);

if(x ==1) 
	printf("O valor de x � igual a 1");
else if(x == 2) 
	printf("o valor � 2");
else 
	printf("O valor n�o � 1");



system("pause");
}
