#include <stdio.h>
#include<stdlib.h>
#include<locale.h>

/* O system("pause") e um comando do dos, entao e um acesso do c
pelo dos para pausar a aplicacao e conseguir visualizar alguns comandos.
O system pause serve para pausar a aplicacao quando estivermos rodando, era
mais utilizado antigamente mas hoje em dia as IDEs mais atuais pausam 
automaticamente*/

main() {
	setlocale(LC_ALL, "Portuguese");
	
	printf("Existem IDEs mais antigas que nao pausam para lermos a tela por\n isso utilizamos o system pause, ele para tudo\n");
	
	system("pause");
}
