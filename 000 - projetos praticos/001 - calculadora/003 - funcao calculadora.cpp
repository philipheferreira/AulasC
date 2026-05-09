#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

	int funcaoReceberValorPrimeiroNumeroOperacoes(){
		int numero1;
		printf("Digite um valor para o numero 1: ");
		scanf("%i", &numero1);
		return numero1;
	}
	
	int funcaoReceberValorSegundoNumeroOperacoes(){
		int numero2;
		printf("Digite um valor para o numero 2: ");
		scanf("%i", &numero2);
		return numero2;
	}

	int operacaoSoma (int numero1, int numero2){
		int resultado;
		
		resultado = numero1 + numero2;
		
		return resultado;
	}
	
	int operacaoSubtracao (int numero1, int numero2){
		return numero1 - numero2;
	}
	
	int operacaoMultiplicacao (int numero1, int numero2){
		return numero1 * numero2;
	}
	
	float operacaoDivisao (float numero1, float numero2){
		float resultado;
		resultado = numero1/numero2;
		return resultado;
	}

int main(){
	setlocale(LC_ALL, "");
	
	int numero1, numero2, menu;
	int somaResultado, subtracaoResultado, multiplicacaoResultado;
	float divisaoResultado;
	
	int funcaoReceberValorPrimeiroNumeroOperacoes();
	int funcaoReceberValorSegundoNumeroOperacoes();
	int soma(int numero1, int numero2);
	int operacaoSubtracao (int numero1, int numero2);
	int operacaoMultiplicacao (int numero1, int numero2);
	float operacaoDivisao (float numero1, float numero2);
	
	
	do{
		
	    printf("1-Soma.\n2-Subtracao.\n3-Multiplicacao.\n4-Divisao.\n0-Sair.\n");
	    scanf("%i", &menu);
		
		if(menu == 1){ 
			numero1 = funcaoReceberValorPrimeiroNumeroOperacoes();
			
			numero2 = funcaoReceberValorSegundoNumeroOperacoes();
			
			somaResultado = operacaoSoma(numero1, numero2);
			
			printf("O valor da soma do numero %i e o numero %i e igual a %i\n", numero1, numero2, somaResultado);
		}else 
		if(menu == 2){
			
			numero1 = funcaoReceberValorPrimeiroNumeroOperacoes();
			
			numero2 = funcaoReceberValorSegundoNumeroOperacoes();
			
			subtracaoResultado = operacaoSubtracao(numero1, numero2);
		
			printf("O valor da subtracao do numero %i e o numero %i e igual a %i\n", numero1, numero2, subtracaoResultado);
			
		} else 
		if(menu == 3){
			
			numero1 = funcaoReceberValorPrimeiroNumeroOperacoes();
			
			numero2 = funcaoReceberValorSegundoNumeroOperacoes();
			
			multiplicacaoResultado = operacaoMultiplicacao(numero1, numero2);
		
			printf("O valor da multiplicacao do numero %i e o numero %i e igual a %i\n", numero1, numero2, multiplicacaoResultado);
			
		}else 
		if(menu == 4){
			
			numero1 = funcaoReceberValorPrimeiroNumeroOperacoes();
			
			numero2 = funcaoReceberValorSegundoNumeroOperacoes();
			
			divisaoResultado = operacaoDivisao(numero1, numero2);
		
			printf("O valor da divisao do numero %i e o numero %i e igual a %f\n", numero1, numero2, divisaoResultado);
			
		} else{
			printf("Programa encerrado, obrigado por utilizar a calculadora");
			
		}	
	
	}while(menu != 0);
	system("pause");
}