#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
	
	int soma(int num1, int num2){ 
		int result;
		
		result = num1 + num2;
		
		return result;
	}
	
	int sub(int num1, int num2){ 
		int result = num1 - num2;
		
		return result;
	}
	
	int mult(int num1, int num2){ 
		return num1 * num2;
	}
	
	float div(float num1, float num2){ 
		float result; 
		result =  num1/ num2;
		return result;
	}
	int main(){ 
		setlocale(LC_ALL, "");
		
		int soma(int num1, int num2);
		int mult(int num1, int num2);
		int x, y, somaresult, multresult;
		float divresult;
		
		printf("Digite um valor do primeiro valor: ");
		scanf("%i", &x);
		
		printf("Digite o valor do segundo valor: ");
		scanf("%i", &y);
	
		somaresult = soma(x, y);
		multresult = mult(x, y);
		divresult = div(((float) x), ((float) y));
		printf("\nO valor da soma das duas variaveis é: %i\n", somaresult);
		printf("O valor da subtração entre as duas variaveis é: %i\n", sub(x, y));
		printf("O valor da multiplicação entre x e y é: %i\n", multresult);
		printf("O valor da divisão entre x e y é igual a %2.f\n", divresult);
		
	system("pause");
	}
