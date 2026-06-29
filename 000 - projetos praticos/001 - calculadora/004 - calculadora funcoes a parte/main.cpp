#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include "funcoes.cpp"
/* Dentro desse codigo estou fazendo Modularização através de Arquivos de 
Cabeçalho (Header Files).

2. Arquivos de Cabeçalho (Header Files - .h)
Quando você usa o #include, você está dizendo ao pré-processador do C: 
"Pegue todo o texto deste arquivo e cole aqui exatamente onde está este 
#include".
Na prática profissional, não colocamos os protótipos diretamente no 
arquivo principal. Nós os colocamos em um arquivo separado com a extensão 
.h (header). Portanto, quando você faz #include "meuarquivo.h", você está 
apenas incluindo os protótipos.

3. Separação Interface / Implementação (ou Modularização)
Esse é o nome do padrão de arquitetura que você está descrevendo. Ele 
funciona assim:

A Interface (Arquivo .h): Contém apenas as declarações (protótipos). É como se 
fosse o "menu" de um restaurante, dizendo o que está disponível.
A Implementação (Arquivo .c): Contém a lógica real, o código que faz as coisas 
funcionarem (o corpo da função com {}).


 */
// --- AQUI VÃO AS DECLARAÇÕES (O que estaria no .h) ---
int funcaoReceberValorPrimeiroNumeroOperacoes();
int funcaoReceberValorSegundoNumeroOperacoes();
int operacaoSoma(int numero1, int numero2);
int operacaoSubtracao(int numero1, int numero2);
int operacaoMultiplicacao(int numero1, int numero2);
float operacaoDivisao(float numero1, float numero2);
// ----------------------------------------------------


int main(){
	setlocale(LC_ALL, "");
	
	int numero1, numero2, menu;
	int somaResultado, subtracaoResultado, multiplicacaoResultado;
	float divisaoResultado;
	
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
