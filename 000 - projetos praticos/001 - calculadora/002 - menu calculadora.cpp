#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "");
	
	int numero1, numero2, menu;
	int soma, subtracao, multiplicacao;
	float divisao;
	
	do{
		
	    printf("1-Soma.\n2-Subtracao.\n3-Multiplicacao.\n4-Divisao.\n0-Sair.\n");
	    scanf("%i", &menu);
		
		if(menu == 1){ 
			printf("Digite um valor para o numero 1:");
			scanf("%i", &numero1);
			
			printf("Digite um valor para o numero 2:");
			scanf("%i", &numero2);
			
			soma = numero1 + numero2;
			
			printf("O valor da soma do numero %i e o numero %i e igual a %i\n", numero1, numero2, soma);
		}else 
		if(menu == 2){
			
			printf("Digite um valor para o numero 1:");
			scanf("%i", &numero1);
			
			printf("Digite um valor para o numero 2:");
			scanf("%i", &numero2);
			
			subtracao = numero1 - numero2;
		
			printf("O valor da subtracao do numero %i e o numero %i e igual a %i\n", numero1, numero2, subtracao);
			
		} else 
		if(menu == 3){
			
			printf("Digite um valor para o numero 1:");
			scanf("%i", &numero1);
			
			printf("Digite um valor para o numero 2:");
			scanf("%i", &numero2);
			
			multiplicacao = numero1 * numero2;
		
			printf("O valor da multiplicacao do numero %i e o numero %i e igual a %i\n", numero1, numero2, multiplicacao);
			
		}else 
		if(menu == 4){
			
			printf("Digite um valor para o numero 1:");
			scanf("%i", &numero1);
			
			printf("Digite um valor para o numero 2:");
			scanf("%i", &numero2);
			
			divisao = ((float)numero1)/( (float)numero2); 
		
			printf("O valor da divisao do numero %i e o numero %i e igual a %f\n", numero1, numero2, divisao);
			
		} else{
			printf("Programa encerrado, obrigado por utilizar a calculadora");
			
		}	
	
	}while(menu != 0);
	system("pause");
}