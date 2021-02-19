#include<stdio.h> // os comandos printf e scanf são chamados dessa biblioteca, a stdio, pois ela é a biblioteca de interação input output, logo ela é responsavel pelas principais interações com o usuario
#include<stdlib.h>
#include<locale.h>

main(){ 
setlocale(LC_ALL, "");

int x = 10;
int y;
printf("O valor de x é igual a %i\n", x); // o printf é a sua comunicação output, os valores são printados na tela para serem visualizados por ele. dentro das aspas é que ficam as informações
// para chamar uma variavel para ser mostrada na tela tem que chamar ela nas aspas pelo tipo de variavel, para definir o local que ela vai aparecer na sentença. 
// como a variavel é do tipo inteiro é usado %i para chama-la. No lado de fora das aspas colocasse uma virgula e coloca o nome da variavel que quer chamar, assim ela vai saber qual das 
//variaveis do tipo inteiro sera chamada

printf("Dê um valor para y: ");
scanf("%i", &y);

printf("\nO valor que vocÊ deu para y é %i\n", y);

system("pause");
}
