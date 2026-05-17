#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Tambem se torna possivel utilizar comandos matematicos com as operacoes
de estrutura e ponteiro. Pegar os resoltados e somar, subtrair, multiplicar
e dividir */

int main(){ 
	setlocale(LC_ALL, "");
	
	struct horario{
		int hora;
		int minuto;
		int segundo;
	};
	
	struct horario agora, *depois; 
	depois = &agora; /* Linkando duas structs */	
	 
	/* a chamada foi definida logo a baixo */
	
	depois -> hora = 20;
	depois -> minuto = 40;
	depois -> segundo = 60;
	
	printf("Hora da variavel ponteiro:\n %i:%i:%i\n\n", agora.hora, agora.minuto, agora.segundo);
	
	int somatorio = 100;
	
	struct horario antes;
	
	antes.hora = somatorio + depois -> segundo;
	antes.minuto = agora.hora - depois -> minuto;
	antes.segundo = depois -> minuto + depois -> segundo;
	
	printf("Hora da variavel ponteiro:\n %i:%i:%i\n\n", antes.hora, antes.minuto, antes.segundo);
	
	
	system("pause");
}