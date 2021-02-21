#include<stdio.h> // os comandos printf e scanf s�o chamados dessa biblioteca, a stdio, pois ela � a biblioteca de intera��o input output, logo ela � responsavel pelas principais intera��es com o usuario
#include<stdlib.h>
#include<locale.h>

/*			##############################AULA 3#############################
	O foco da aula 3 � os comandos input e output. como vimos anteriormente a biblioteca stdio.h � responsavel por comandos que visam uma intera��o com o usuario, seja plotando valores na tela
	ou pegando esses valores declarados pelo usuario e colocando dentro do programa
	o comando que plota valores na tela � o printf("");. Sendo que entre as aspas fica as informa��es plotadas na tela "". Tamb�m vimos que quando informamos variaveis devemos colocar o tipo
	que sera chamado dentro das aspas, para ser definido o local que ela aparecer, e fora da aspas adicionado uma virgula antes deve ser definido o nome da variavel chamada. Assim o pc tem
	a informa��o do tipo de variavel e onde ela ira ser plotada, no caso dentro das aspas, e fora dela separada por uma virgula � mostrado qual variavel atrav�s do nome. Ex: 
						char nome = 'p';
						printf("A primeira letra do meu nome � %c", nome);

	J� o comando Scanf � responsavel por capiturar informa��es colocadas no programa pelo usuario que est� utilizando o programa. o scanf pega a informa��o declarada pelo usuario e salva ela
	conforme o tipo de informa��o que for definida que ela vai receber e a armazena no endere�amento da variavel, armazenando um valor na variavel. ex: 
	
						int x;
						scanf("%i", &x); // Nesse codigo foi definido que a variavel � do tipo inteiro. Se o usuario tentar passar outro valor que n�o seja inteiro o codigo dara erro. 
										 // e o endere�amento est� definido em x, logo o valor ser� armazenado e associado a varaivel x diretamente.
*/

main(){ 
setlocale(LC_ALL, "");

int x = 10; 
int y;
printf("O valor de x � igual a %i\n", x); // o printf � a sua comunica��o output, os valores s�o printados na tela para serem visualizados por ele. dentro das aspas � que ficam as informa��es
// para chamar uma variavel para ser mostrada na tela tem que chamar ela nas aspas pelo tipo de variavel, para definir o local que ela vai aparecer na senten�a. 
// como a variavel � do tipo inteiro � usado %i para chama-la. No lado de fora das aspas colocasse uma virgula e coloca o nome da variavel que quer chamar, assim ela vai saber qual das 
//variaveis do tipo inteiro sera chamada

printf("D� um valor para y: ");
scanf("%i", &y); // o tipo de variavel � inteira ent�o foi declarado que recebera um valor do tipo inteiro, o endere�amento foi associado a y, ent�o o valor ser� armazenado 
//diretamente a variavel y

printf("\nO valor que voc� deu para y � %i\n", y);

system("pause");
}
