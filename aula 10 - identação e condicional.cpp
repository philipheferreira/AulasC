#include<stdio.h>
#include<stdlib.h>
#include<locale.h>



main(){ 

	setlocale(LC_ALL, "");
	
	int menu, number1, number2, n; 
	
	
	do{
		switch(menu){ 
			
			
			printf("Digite as opções:\n1.Ativar opções com if identado.\n2.Ativar repetição identada.\n3.Ativar opção de operador condicional");
			scanf("%i", &menu);
			
			
			case 1:
				printf("Digite um valor para a primeira variavel: ");
				scanf("%i", &number1);
				printf("Digite um valor para a segunda variavel: ");
				scanf("%i", &number2);
				
				if() 
					printf("");
				
				else if()
					printf("");
				else
					
				
			break; 
			
			case 2:
				
				printf("Quantas repetições você quer para o repetidor for: ");
				scanf("%i", &n);
				
				for(number1 = 0; number1 < n; number1++) 
					printf("%i\n", number1);
				
			break; 
			
			case 3: 
			
				printf("Digite um valor para a primeira variavel: ");
				scanf("%i", &number1);
				printf("Digite um valor para a segunda variavel: ");
				scanf("%i", &number2);
				
				number1 > number2? printf("O primeiro valor é maior que o segundo") : printf("O segundo valor é maior que o primeiro");
				
			break;
			
			default: 
			
				printf("Comando não reconhecido, por favor repita comando");
				
				system("pause");
			
			break;
		
		}
	}while(menu != 0);

system("pause");
}
