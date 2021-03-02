#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* O case � um comando do tipo escolha parecido com o if, entretanto o if pode trabalhar com diferentes variaveis (mais de uma) para estabelecer uma condi��o que deve ser suprida para ativar   
o trecho do codigo em uma situa��o especifica. o siwitch � um comando que define a unica variavel que sera trabalhada, depois disso os case ir�o s� definir qual o valor que a variavel, definida 
no switch, precisa ter para ativar esse trecho especifico. lembrando que pode ser qualquer tipo de variavel, incluindo char.  
*/

main(){ 
setlocale(LC_ALL, "");
int x = 4;

switch(x){ 
	case 1: // no case n�o � definido uma chave em que estara o trecho especifico ativado, mas estara definido por dois pontos
		printf("O valor de x � igual a 1");
	break; // o break tem o objetivo de encerrar o codigo depois que o trecho for lido
		
	case 2: 
		printf("O valor de x � igual a 2");
	break;
		
	case 3: 
		printf("O valor de x � igual a 3");
	break;
	
	case 4: 
		printf("O valor de x � igual a 4");
	break;
	
	default: // default � a situa��o que n�o foi contemplada por nenhum dos cases pre definidos pelo programador, ou seja, se o valor do x n�o suprir nenhuma nas situa��es cases, o default � ativado
		printf("O valor de x n�o � nenhuma op��o anterior");
	break;
}



system("pause");
}
