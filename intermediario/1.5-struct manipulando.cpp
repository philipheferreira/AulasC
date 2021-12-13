#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	struct horario{ 
	int horas;
	int minutos;
	int segundos;
	};
	
	struct horario agora;
	agora.horas = 10;
	agora.minutos = 20;
	agora.segundos = 40;
	
	
	struct horario depois; 
	depois.horas = agora.horas + 10;
	depois.minutos = agora.minutos;
	depois.segundos = 20 / 5;
	printf("%i", agora.horas);
}
