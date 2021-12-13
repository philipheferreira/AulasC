#include<stdio.h> // os comandos printf e scanf são chamados dessa biblioteca, a stdio, pois ela é a biblioteca de interação input output, logo ela é responsavel pelas principais interações com o usuario
#include<stdlib.h>
#include<locale.h>

/*			##############################AULA 3#############################
	O foco da aula 3 é os comandos input e output. como vimos anteriormente a biblioteca stdio.h é responsavel por comandos que visam uma interação com o usuario, seja plotando valores na tela
	ou pegando esses valores declarados pelo usuario e colocando dentro do programa
	o comando que plota valores na tela é o printf("");. Sendo que entre as aspas fica as informações plotadas na tela "". Também vimos que quando informamos variaveis devemos colocar o tipo
	que sera chamado dentro das aspas, para ser definido o local que ela aparecer, e fora da aspas adicionado uma virgula antes deve ser definido o nome da variavel chamada. Assim o pc tem
	a informação do tipo de variavel e onde ela ira ser plotada, no caso dentro das aspas, e fora dela separada por uma virgula é mostrado qual variavel através do nome. Ex: 
						char nome = 'p';
						printf("A primeira letra do meu nome é %c", nome);

	Já o comando Scanf é responsavel por capiturar informações colocadas no programa pelo usuario que está utilizando o programa. o scanf pega a informação declarada pelo usuario e salva ela
	conforme o tipo de informação que for definida que ela vai receber e a armazena no endereçamento da variavel, armazenando um valor na variavel. ex: 
	
						int x;
						scanf("%i", &x); // Nesse codigo foi definido que a variavel é do tipo inteiro. Se o usuario tentar passar outro valor que não seja inteiro o codigo dara erro. 
										 // e o endereçamento está definido em x, logo o valor será armazenado e associado a varaivel x diretamente.
*/

main(){ 
setlocale(LC_ALL, "");

int x = 10; 
int y;
printf("O valor de x é igual a %i\n", x); // o printf é a sua comunicação output, os valores são printados na tela para serem visualizados por ele. dentro das aspas é que ficam as informações
// para chamar uma variavel para ser mostrada na tela tem que chamar ela nas aspas pelo tipo de variavel, para definir o local que ela vai aparecer na sentença. 
// como a variavel é do tipo inteiro é usado %i para chama-la. No lado de fora das aspas colocasse uma virgula e coloca o nome da variavel que quer chamar, assim ela vai saber qual das 
//variaveis do tipo inteiro sera chamada

printf("Dê um valor para y: ");
scanf("%i", &y); // o tipo de variavel é inteira então foi declarado que recebera um valor do tipo inteiro, o endereçamento foi associado a y, então o valor será armazenado 
//diretamente a variavel y

printf("\nO valor que vocÊ deu para y é %i\n", y);

system("pause");
}
