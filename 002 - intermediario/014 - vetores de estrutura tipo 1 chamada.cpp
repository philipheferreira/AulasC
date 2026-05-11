#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(){

	setlocale(LC_ALL, "Portuguese");
		
	struct horario{ 
    	int horas;
    	int minutos;
    	int segundos;
	};
    
    struct horario teste[5];
    
    teste[0].horas = 10;
    teste[0].minutos = 20;
    teste[0].segundos = 30;
    
    printf("%i:%i:%i\n", teste[0].horas, teste[0].minutos, teste[0].segundos);
    
    teste[1].horas = 40;
    teste[1].minutos = 50;
    teste[1].segundos = 60;
    
    printf("%i:%i:%i\n", teste[1].horas, teste[1].minutos, teste[1].segundos);
    
    
    system("pause"); 
    return 0;
}

