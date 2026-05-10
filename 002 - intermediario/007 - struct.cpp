#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

	main(){ 
	setlocale(LC_ALL, "");
	
	struct horario{ //criando uma estrutura e criando as variaveis dentro da estrutura horario
		int horas;
		int minutos;
		int segundos;
		//char letra;
		//double algo;
	}depois = {10, 30}; // outra forma de chamar criar struct agora
		
	struct horario agora; // declarando um tipo de estrutura que é importando todos os valores dentro da estrutura horario para ela
	agora.horas = 15;
	agora.minutos = 17;
	agora.segundos = 50;
	//agora.letra = 'c';
	//agora.algo = 20000;
	

	
	printf("Relogio: %i:%i:%i\n", agora.horas, agora.minutos, agora.segundos);
	
	printf("\n%i:%i\n", depois.horas, depois.minutos);
	
	struct horario antes = {.horas = 13, .minutos = 32, .segundos = 54};
	
	printf("%i:%i:%i\n\n", antes.horas, antes.minutos, antes.segundos);
	
	system("pause");
	}
