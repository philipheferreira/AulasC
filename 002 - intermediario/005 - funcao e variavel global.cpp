#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

/* como estou usando uma variavel que foi declarada tambem como static
ela vai salvar as acoes anteriores dentro da variavel. so comparar o 
resultado da variavel static com a normal. Criei uma variavel global, diferente
das outras variaveis que podem so ser acessadas localmente a variavel local
pode ser acessado em qualquer espaco, entretanto necessita de mais memoria
pra sua criacao que uma variavel criada localmente. E como ela pode ser 
acessada em qualquer espaco tambem entra uma situacao de seguranca*/

/* Por questao de padronizacao sempre colocar um g na frente de uma
variavel global, mais facil de indentificar */

int gVariavelGlobal = 2;
	
void teste(void){ 
		
	int variavelLocalAutomatica = 2;
	variavelLocalAutomatica *= 2;
	
	static int variavelLocalEstatica = 2;
	variavelLocalEstatica *= 2;
	
	gVariavelGlobal *= 2;
		
	printf("Local Automatica = %i\n", variavelLocalAutomatica);
	printf("Local Estatica = %i\n", variavelLocalEstatica);
	printf("Global = %i\n", gVariavelGlobal);
}
	
int main(){ 
	setlocale(LC_ALL, "");
		
	
	teste();
	teste();
	teste();
		
	system("pause");
}

