#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 
	O operador condicional � um comando que usa como base apenas duas op��es ou comandos. Ele funciona da seguinte forma, com base em uma condi��o. Se essa condi��o for atendida (se mostrar 
	verdadeira) o codigo ativa a resposta que estiver a esquerda dos dois pontos ":". Se a condi��o for falsa, ent�o o que estiver a direita dos dois pontos ":" ser� ativada. 
	O operador condicional tem a mesma fun��o das estruturas de escolha, entretanto � mais simples pois funciona s� com uma condi��o e � limitado a dois acontecimentos apenas, quando
	a condi��o for verdadeira ou falsa, tendo apenas um comando em cada uma dessas situa��es 
*/
int main(){ 
setlocale(LC_ALL, "");
int x = 20, y = 10; 
int result;
char c;

x > y ? printf("x � maior que y\n") : printf("y � maior que x\n");

x > y ? result = 30 : c = 'p'; 

x > y ? printf("O valor de result � %i\n", result) : printf("o valor de c � %c\n", c); 

system("pause");
}
