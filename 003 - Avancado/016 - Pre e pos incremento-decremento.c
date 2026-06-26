#include <stdio.h>

int main(){
	
	/* O exemplo de baixo serve para mostrar o que o incremento e o decremento
	fazem no projeto do codigo e como eles sao afetados pela operacao pre e pos.
	a Operacao pre pode incrementar ou decrementar o valor mas antes da operacao
	que sera feita for realizada, ou seja, o valor sera alterado antes da operacao
	for finalizada.
	Ja o pos o valor vai ser incrementado ou decrementado depois do fim da operacao
	em questao */
	
	int x = 1;
	int y = 2;
	
	printf("Valor de x antes de qualquer alteracao: %i\n", x);
	printf("Valor de y antes de qualquer alteracao: %i\n\n", y);
	
	printf("O valor de x com o pre incremento: %i\n", ++x);
	printf("O valor de x com o pos incremento: %i\n\n", x++); /* Como vai ser
	uma operacao pos incremento, o valor adicionado nao aparece junto com essa
	operacao printf, so apos o fim dela, entao x ira aparecer com o mesmo valor
	do printf de cima */
	
	printf("O valor de y com o pre decremento: %i\n", --y);
	printf("O valor de y com o pos decremento: %i\n\n", y--); /* */
	
	printf("O valor final de x vai ser o seguinte: %i\n", x);
	printf("O valor final de y vai ser o seguinte: %i\n\n", y);
	
	system("pause");
}