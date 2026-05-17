#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* A segunda forma de chamar ponteiros atribuindo valores esta sendo contextualizada
a baixo */

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
	
	
	system("pause");
}