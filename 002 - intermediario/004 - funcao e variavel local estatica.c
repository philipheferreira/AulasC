#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

/* como estou usando uma variavel que foi declarada tambem como static
ela vai salvar as acoes anteriores dentro da variavel. so comparar o 
resultado da variavel static com a normal*/
	
void teste(void){ 
		
	int variavelLocalAutomatica = 2;
	variavelLocalAutomatica *= 2;
	
	static int variavelLocalEstatica = 2;
	variavelLocalEstatica *= 2;
		
	printf("Local Automatica = %i\n", variavelLocalAutomatica);
	printf("Local Estatica = %i\n", variavelLocalEstatica);
}
	
int main(){ 
	setlocale(LC_ALL, "");
		
	
	teste();
	teste();
	teste();
		
	system("pause");
}

