#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* O case é um comando do tipo escolha parecido com o if, entretanto o if pode trabalhar com diferentes variaveis (mais de uma) para estabelecer uma condição que deve ser suprida para ativar   
o trecho do codigo em uma situação especifica. o siwitch é um comando que define a unica variavel que sera trabalhada, depois disso os case irão só definir qual o valor que a variavel, definida 
no switch, precisa ter para ativar esse trecho especifico. lembrando que pode ser qualquer tipo de variavel, incluindo char.  
*/

main(){ 
setlocale(LC_ALL, "");
int x = 4;

switch(x){ 
	case 1: // no case não é definido uma chave em que estara o trecho especifico ativado, mas estara definido por dois pontos
		printf("O valor de x é igual a 1");
	break; // o break tem o objetivo de encerrar o codigo depois que o trecho for lido
		
	case 2: 
		printf("O valor de x é igual a 2");
	break;
		
	case 3: 
		printf("O valor de x é igual a 3");
	break;
	
	case 4: 
		printf("O valor de x é igual a 4");
	break;
	
	default: // default é a situação que não foi contemplada por nenhum dos cases pre definidos pelo programador, ou seja, se o valor do x não suprir nenhuma nas situações cases, o default é ativado
		printf("O valor de x não é nenhuma opção anterior");
	break;
}



system("pause");
}
