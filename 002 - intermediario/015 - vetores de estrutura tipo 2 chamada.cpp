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
    
    struct horario teste[5] = {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}, {100, 110, 120}, {130, 140, 150}};
    
    
    int i;
    for(i = 0; i < 5; ++i){ 
		printf("%i:%i:%i\n", teste[i].horas, teste[i].minutos, teste[i].segundos);
	}
    
    
    system("pause"); 
    return 0;
}

