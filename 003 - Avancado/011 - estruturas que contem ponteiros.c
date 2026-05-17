#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* A segunda forma de chamar ponteiros atribuindo valores esta sendo contextualizada
a baixo */

int main(){ 
	setlocale(LC_ALL, "");
	
	struct horario{
		int *pHora;
		int *pMinuto;
		int *pSegundo;
	};
	
	struct horario hoje;
	
	int hora = 200;
	int minuto = 300;
	int segundo = 400;
	
	hoje.pHora = &hora;
	hoje.pMinuto = &minuto;
	hoje.pSegundo = &segundo;
	
	printf("");
	printf("");
	printf("");
	
	
	printf("");
	
	
	system("pause");
}