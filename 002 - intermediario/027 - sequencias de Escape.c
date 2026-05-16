#include <stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Os comandos de sequencia de escape podem ser utilizados das formas mais variadas
e existem variados comandos de scape, tem alguns a baixo para mostra
*/

main() {
	setlocale(LC_ALL, "Portuguese");
	
	printf("fazendo um teste no geral\n"); /* Ira criar um espaco de uma linha */
	printf("fazendo o segundo teste\n\0"); /* nada vai acontecer porque ja existe 
	um zero finalizando todas as strings dentro de projetos */
	printf("essa frase \0 vai terminar antes de ser concluida"); /*Como tem um zero antes
	de tudo vai terminar antes porque o zero com barra significa o fim da string */
	printf("\nvai vir um barulho sonoro por causa desse \a\n");
	printf("O curso vai ficar do lado esquerdo \b\n");

	system("pause");
}
