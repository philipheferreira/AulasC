#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* esse codigo so vai funcionar em compiladores especificos, falcon nao
e um deles. o correto seria declarar o struct horario globalmente */
main(){
	
	struct horario funcaoRecebeHorario(struct horario x);
	
	struct horario{ 
		int horas;
		int minutos;
		int segundos;
	};
	
	struct horario agora;
	agora.horas = 10;
	agora.minutos = 20;
	agora.segundos = 40;
	
	struct horario proxima;
	proxima = funcaoRecebeHorario(agora);
	
	printf("%i:%i:%i\n", proxima.horas, proxima.minutos, proxima.segundos);
	


}

/* quando for passar valores struct dentro de uma funcao tem 
que identificar na frente da funcao o struct. Assim como no parametro
tambem quando for um parametro struct */
struct horario funcaoRecebeHorario(struct horario x){
	
	printf("%i:%i:%i\n", x.horas, x.minutos, x.segundos);
	
	x.horas = 100;
	x.minutos = 100;
	x.segundos = 100;
	
	return x;
}