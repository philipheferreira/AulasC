#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(){ 
	setlocale(LC_ALL, "");
	
	struct valores{
		int valorDentroDaEstrutura;
	};
	
	struct operacoes{
		int soma;
		int subtracao;
		int multiplicacao;
		float divisao;
	};
	
	struct valores *primeiroValor, visualizarPrimeiroValor, *segundoValor, visualizarSegundoValor; 
	struct operacoes *operacoesUtilizadas, visualizarOperacoesUtilizadas;
	
	primeiroValor = &visualizarPrimeiroValor; /* Linkando duas structs */
	segundoValor = &visualizarSegundoValor;
	operacoesUtilizadas = &visualizarOperacoesUtilizadas;
	 
	/* a chamada foi definida logo a baixo */
	
	primeiroValor -> valorDentroDaEstrutura = 20;
	
	printf("Hora da variavel ponteiro:\n %i\n\n", visualizarPrimeiroValor.valorDentroDaEstrutura );
	
	segundoValor -> valorDentroDaEstrutura = 50;
	
	printf("Hora da variavel ponteiro:\n %i:%i\n\n", visualizarSegundoValor.valorDentroDaEstrutura);
	
	operacoesUtilizadas -> soma = primeiroValor -> valorDentroDaEstrutura + segundoValor -> valorDentroDaEstrutura;
	
	printf("%i\n", visualizarOperacoesUtilizadas.soma);
	
	operacoesUtilizadas -> subtracao = primeiroValor -> valorDentroDaEstrutura - segundoValor -> valorDentroDaEstrutura;
	
	printf("%i\n", visualizarOperacoesUtilizadas.subtracao);
	
	operacoesUtilizadas -> multiplicacao = primeiroValor -> valorDentroDaEstrutura * segundoValor -> valorDentroDaEstrutura;
	
	printf("%i\n", visualizarOperacoesUtilizadas.multiplicacao);
	
	operacoesUtilizadas -> divisao = (float)primeiroValor -> valorDentroDaEstrutura / (float)segundoValor -> valorDentroDaEstrutura;
	
	printf("%f\n", visualizarOperacoesUtilizadas.divisao);
	
	system("pause");
}