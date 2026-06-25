#include<stdio.h>
#include<stdlib.h>
#include<locale.h>



int main(){ 
	setlocale(LC_ALL, "portuguese");
	
	struct lista{
		   int valor;
		   struct lista *proximo; /* Dentro dessa lista esta sendo armazenada
		   dados de uma lista com ponteiro. Entao atraves do dado ponteiro 
		   sera armazenado dados de uma lista inteira, que sera a propria
		   estrutura da lista */
	};
	
	struct lista m1, m2, m3;
	struct lista *gancho = &m1;
	
	m1.valor = 10;
	m2.valor = 20;
	m3.valor = 30;
	
	m1.proximo = &m2;
	m2.proximo = &m3; /* */
	m3.proximo = (struct lista *)0; /* O valor desse proximo sera igual a zero */
	
	while(gancho != (struct lista *)0){
		printf("%i\n", gancho->valor);
		gancho = gancho -> proximo; /*  */
	}
	
	system("pause");
}


