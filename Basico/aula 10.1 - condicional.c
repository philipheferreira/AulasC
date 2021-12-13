#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 
	O operador condicional é um comando que usa como base apenas duas opções ou comandos. Ele funciona da seguinte forma, com base em uma condição. Se essa condição for atendida (se mostrar 
	verdadeira) o codigo ativa a resposta que estiver a esquerda dos dois pontos ":". Se a condição for falsa, então o que estiver a direita dos dois pontos ":" será ativada. 
	O operador condicional tem a mesma função das estruturas de escolha, entretanto é mais simples pois funciona só com uma condição e é limitado a dois acontecimentos apenas, quando
	a condição for verdadeira ou falsa, tendo apenas um comando em cada uma dessas situações 
*/
int main(){ 
setlocale(LC_ALL, "");
int x = 20, y = 10; 
int result;
char c;

x > y ? printf("x é maior que y\n") : printf("y é maior que x\n");

x > y ? result = 30 : c = 'p'; 

x > y ? printf("O valor de result é %i\n", result) : printf("o valor de c é %c\n", c); 

system("pause");
}
