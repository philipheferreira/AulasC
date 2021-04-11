#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

	main(){ 
	setlocale(LC_ALL, "");	
	
	int x , y;
	
	printf("Digite um valor para x: ");
	scanf("%i", &x);
	
	for(y = 0; y< 10; y++){ 
		
		if(x == y){ 
			printf("O valor de y é o mesmo de x\n");
			continue;/*O continue pode ser usado como uma especie de saida momentania de um laço. O codigo vai continuar rodando entretanto por um momento, ou ativamente ele pode
			servir para sair de um laço de reperição ou de um comando escolha especifico em uma situação especifica. Para evitar que naquele momento especifico, ou com o comando
			espeficico seja possivel sair ou evitar o ativamento de um trecho do codigo, sem que o programa seja fechado. é bem util quando se sabe utilizar */
		}else{ 
		
		printf("O valor de y é %i\n", y);
		}
		printf("XXXXXXXXXXXXX\n");
	}
	
	
	
	system("pause");
	}
