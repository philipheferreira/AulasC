#include<stdio.h> // Essa � uma biblioteca. Nas lingaguens de programa��o as bibliotecas j� tem comandos e logicas existentes, nos s� incluimos elas em nossos codigos para utilizar os comandos
#include<stdlib.h> // biblioteca com comandos padro�es com o objetivo de tornar o codigo mais funcional
#include<locale.h> // essa biblioteca tem a fun��o de adicionar a acentua��o para poder usar em alguma linguagem especifica, quando eu adiciono coloco em aberto para aceitar todas as 
// acentua��es de todas as lingaguens


main(){ // O main no codigo � a sua fun��o principal. Mais pra frente voc�s ver�o como montar fun��es, a ideia � que voc�s podem usar o main como centro do codigo em praticamente tuto rsrs
setlocale(LC_ALL, ""); // Comando para adicionar a acentua��o no codigo atraves da biblioteca locale declarada e incluida no codigo mais a cima
printf("Ola mundo"); // printf � um comando classificado output, ou seja, � para o usuario visualizar. � a sua resposta na tela. A sua comuni��o com o mundo exterior
printf("\t\tOlaaaaaaaaaaaaaaaaaaaaaaaa"); // No final de cada comando em C devesse colocar ponto e virgula, para o computador, atrav�s do compilador, assimilar que aqui � o final da linha e 
// o final desse comando, se n�o o codigo da erro 
printf("\n\n E aiiiiiiiiiiii????") // existem comandos que podesse usar para controlar o espa�amento plotado na nela com rela��o ao texto
printf("\tAgora eu tenho acento. \n��������������")// O comando \t da um tab na linha, e o comando \n da um espa�o para baixo

system("pause"); // Esse � um comando oldSchool. Em vers�es anteriores a tela n�o pausava, por isso usavamos esse comando para pausa-la. Coloco a nivel de informa��o 
}
