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
			break; /* o sistema de break pode ser utilizado em qualquer momento do codigo, não apenas na situação do case. Ele pode ser utilizado para evitar que o sistema crash por 
			 algum funcionamento ruim ou alguma atividade irregular do usuario, para evitar qualquer dano ao programa ou ao computador do usuario
			*/
		}else{ 
		
		printf("O valor de y é %i\n", y);
		}
		printf("XXXXXXXXXXXXX\n");
	}
	
	
	
	system("pause");
	}
