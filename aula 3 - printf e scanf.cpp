#include<stdio.h> // os comandos printf e scanf s�o chamados dessa biblioteca, a stdio, pois ela � a biblioteca de intera��o input output, logo ela � responsavel pelas principais intera��es com o usuario
#include<stdlib.h>
#include<locale.h>

main(){ 
setlocale(LC_ALL, "");

int x = 10;
int y;
printf("O valor de x � igual a %i\n", x); // o printf � a sua comunica��o output, os valores s�o printados na tela para serem visualizados por ele. dentro das aspas � que ficam as informa��es
// para chamar uma variavel para ser mostrada na tela tem que chamar ela nas aspas pelo tipo de variavel, para definir o local que ela vai aparecer na senten�a. 
// como a variavel � do tipo inteiro � usado %i para chama-la. No lado de fora das aspas colocasse uma virgula e coloca o nome da variavel que quer chamar, assim ela vai saber qual das 
//variaveis do tipo inteiro sera chamada

printf("D� um valor para y: ");
scanf("%i", &y);

printf("\nO valor que voc� deu para y � %i\n", y);

system("pause");
}
