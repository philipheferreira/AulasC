#include <stdio.h>
/* com o define posso mudar o valor em diferentes instancias caso seja necessario
uma modificacao pontual */

#define NUMERO_MAXIMO_ALUNOS 2000


void umaFuncao(void){
	printf("%i\n", NUMERO_MAXIMO_ALUNOS);
}

void umaOutraFuncao(void){
	printf("%i\n", NUMERO_MAXIMO_ALUNOS);
}

int main(void){
	
	void umaOutraFuncao(void);
	void umaFuncao(void);
	
	printf("%i\n", NUMERO_MAXIMO_ALUNOS);
	umaFuncao();
	umaOutraFuncao();
	
	system("pause");
	return 0;
}