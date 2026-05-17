#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* O ponteiro pode ser utilizado para realizar as mais diversas operacoes 
matematicas sem problema*/


int main(){ 
	setlocale(LC_ALL, "");
	
	int primeiroValor = 10;
	int segundoValor = 20;
	int valorSoma, valorSubtracao, valorMultiplicacao ;
	float valorDivisao;
	int *pPrimeiroValor = &primeiroValor;
	int *pSegundoValor = &segundoValor;
	
	/* Para realizar qualquer soma com ponteiros deve somar utilizando
	o * na frente de cada um, porque se somar sem eles sera como se
	estivessemos tentando somar os enderecos, o que retornara erro
	e o programa nao ira rodar */
	
	valorSoma = *pPrimeiroValor + *pSegundoValor;
	valorSubtracao = *pPrimeiroValor - *pSegundoValor;
	valorMultiplicacao = *pPrimeiroValor * *pSegundoValor;
	valorDivisao = (float)*pPrimeiroValor / (float)*pSegundoValor;
	
	
	
	printf("Endereco alocado para pInteiro: %i.\n\nO valor de pInteiro: %i.\n\n", pPrimeiroValor, *pPrimeiroValor);
	printf("Endereco alocado para pDouble: %i.\n\nO valor de pDouble: %i\n\n", pSegundoValor, *pSegundoValor);
	
	printf("A soma do primeiro numero cujo valor ser de %i e o segundo numero cujo valor ser %i tem o resultado de %i\n\n", *pPrimeiroValor, *pSegundoValor, valorSoma);
	printf("A subtracao do primeiro numero cujo valor ser de %i e o segundo numero cujo valor ser %i tem o resultado de %i\n\n", *pPrimeiroValor, *pSegundoValor, valorSubtracao);
	printf("A multiplicacao do primeiro numero cujo valor ser de %i e o segundo numero cujo valor ser %i tem o resultado de %i\n\n", *pPrimeiroValor, *pSegundoValor, valorMultiplicacao);
	printf("A divisao do primeiro numero cujo valor ser de %i e o segundo numero cujo valor ser %i tem o resultado de %f\n\n", *pPrimeiroValor, *pSegundoValor, valorDivisao);
	
	system("pause");
}
