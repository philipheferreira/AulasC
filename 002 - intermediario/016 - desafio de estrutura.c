#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

struct horario{
	int hora;
	int minuto;
	int segundo;
};

int main() {
	
	void receberHorarios(struct horario list[5]);
	void printfHorarios(struct horario list[5]);
	struct horario listaHorarios[5];
	
	receberHorarios(listaHorarios);
	printfHorarios(listaHorarios);
	
	
	system("pause");
	
}

void receberHorarios(struct horario lista[5]){
	   
	   int i;
	   for(i = 0; i < 5; ++i){
		   printf("Digite o %i horario no seguinte formato(hh:mm:ss): ", i + 1);
		   scanf("%i:%i:%i", &lista[i].hora, &lista[i].minuto, &lista[i].segundo);
	   }
	   	
}

void printfHorarios(struct horario lista[5]){ 
	int i;
	for(i = 0; i < 5; ++i) {
		printf("O %i horario e = %i:%i:%i/n", i + 1, lista[i].hora, lista[i].minuto, lista[i].segundo);
	}
}