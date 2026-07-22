#include <stdio.h>
/* Esse projeto mostra um codigo antes de usar os defines para mostrar: No caso 
para fazer uma mudanca grande, em vez de mudar cada uma das variaveis
de forma independente eu posso mudar elas todas de uma vez utilizando 
um comando declarado dentro do define para as diferentes chamadas*/
void umaFuncao(void){
	printf("%i\n", 1000);
}

void umaOutraFuncao(void){
	printf("%i\n", 1000);
}

int main(void){
	
	void umaOutraFuncao(void);
	void umaFuncao(void);
	
	printf("%i\n", 1000);
	umaFuncao();
	umaOutraFuncao();
	
	system("pause");
	return 0;
}