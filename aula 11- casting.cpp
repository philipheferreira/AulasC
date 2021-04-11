#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/* casting é uma forma de comando que pode ser utilizada para transformar o valor de uma variavel em um dado momento em uma operação. Ou seja, durante um dado momento ela podera ser trabalhada com um tipo diferente, 
sem necessitar consumir o valor de uma variavel durante todo o processo do programa
*/

	int main(){ 
	setlocale(LC_ALL, "");
	int num1, num2;
	float result, result2;
	
	
	printf("Digite o valor da primeira variavel: ");
	scanf("%i", &num1);
	printf("Digite o valor da segunda variavel: ");
	scanf("%i", &num2);
	
	result = (float (num1/num2))/3; // o processo do casting. Entretanto devesse focar se você está utilizando a forma correta para ser utilizada
	result2 =((float (num1)) /(float (num2)))/3; // dependendo de como utilizar pode se ter resultados diferentes, ou errados;
	
	printf("O resultado da operação da primeira e segunda variavel é %f", result); // como é exemplificado pela diferença dos resultados da variavel result1 e result2;
	printf("\nO outro resultado possivel é %f\n", result2);
	system("pause");
	}
