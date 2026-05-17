#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Ao inves de linkar o valor do inteiro ao ponteiro tambem vai ser possivel
linkar o endereco da variavel ao ponteiro. */

int main(){ 
	setlocale(LC_ALL, "");
	
	struct horario{
		int hora;
		int minuto;
		int segundo;
	};
	
	struct horario agora, *depois; /* Foi criado um struct normal agora e um
	outro struct do tipo ponteiro que o nome sera depois */
	depois = &agora; /* Linkando duas structs */
	
	printf("Horario agora antes de ser alocado um valor:\n%i:%i:%i\n\n", agora.hora, agora.minuto, agora.segundo);
	
	/* O exemplo a baixo usa ponteiros como temos usado ate entao, usando a chamada
	de ponteiro e selecionado para onde queremos para receber um valor, no
	cenario a baixo nao dara certo*/
	
	//*depois.hora = 20; 
	
	/* Pelo fato de existir uma precendencia de sinais, entao a parte de cima
	esta errada pela preferencia esta errada porque a ideia que o que esta sendo
	definido que tanto hora e depois sao ponteiros, o que esta errado
	entao o correto sera o a baixo */
	
	(*depois).hora = 20;
	(*depois).minuto = 40;
	(*depois).segundo = 60;
	
	printf("Hora da variavel ponteiro:\n %i:%i:%i\n\n", agora.hora, agora.minuto, agora.segundo);
	
	
	system("pause");
}