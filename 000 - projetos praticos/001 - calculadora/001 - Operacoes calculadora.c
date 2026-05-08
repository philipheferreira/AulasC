#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "");
	
	int numero1, numero2;
	int soma, subtracao, multiplicacao;
	float divisao;
	
	
	printf("Digite um valor para o numero 1:");
	scanf("%i", &numero1);
	
	printf("Digite um valor para o numero 2:");
	scanf("%i", &numero2);
	
	printf("\n O valor %i e %i", numero1, numero2);
	
	soma = numero1 + numero2;
	
	printf("O valor da soma do numero %i e o numero %i e igual a %i\n", numero1, numero2, soma);
	
	subtracao = numero1 - numero2;
	
	printf("O valor da subtracao do numero %i e o numero %i e igual a %i\n", numero1, numero2, subtracao);
	
	multiplicacao = numero1 * numero2;
	
	printf("O valor da multiplicacao do numero %i e o numero %i e igual a %i\n", numero1, numero2, multiplicacao);
	
	divisao = ((float)numero1)/( (float)numero2); 
	
	printf("O valor da divisao do numero %i e o numero %i e igual a %f\n", numero1, numero2, divisao);
	
	system("pause");
}