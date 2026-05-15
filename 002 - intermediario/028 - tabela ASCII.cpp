#include <stdio.h>
#include<stdlib.h>
#include<locale.h>

/* O computador so le comandos binarios, por conta disso ocorre uma conversao
visual das informacoes para entendermos. A informacao de cada numero 
sera salva no menor padrao de medicao do computador que vai ser o 
byte. 1 byte equivale a 8 bits, com isso temos um espaco de 8 numeros para ser
preenchidos. o que significa que o maior valor de caractere de informacao sera
de 2 elevado a 8, que sera igual a 254. Ou seja, posso salvar ate 254 valores
dentro de 1 byte. */

main() {
	setlocale(LC_ALL, "Portuguese");
	
	
	system("pause");
}
