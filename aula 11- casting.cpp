#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/* casting � uma forma de comando que pode ser utilizada para transformar o valor de uma variavel em um dado momento em uma opera��o. Ou seja, durante um dado momento ela podera ser trabalhada com um tipo diferente, 
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
	
	result = (float (num1/num2))/3; // o processo do casting. Entretanto devesse focar se voc� est� utilizando a forma correta para ser utilizada
	result2 =((float (num1)) /(float (num2)))/3; // dependendo de como utilizar pode se ter resultados diferentes, ou errados;
	
	printf("O resultado da opera��o da primeira e segunda variavel � %f", result); // como � exemplificado pela diferen�a dos resultados da variavel result1 e result2;
	printf("\nO outro resultado possivel � %f\n", result2);
	system("pause");
	}
