#include<stdio.h> // Essa é uma biblioteca. Nas lingaguens de programação as bibliotecas já tem comandos e logicas existentes, nos só incluimos elas em nossos codigos para utilizar os comandos
#include<stdlib.h> // biblioteca com comandos padroões com o objetivo de tornar o codigo mais funcional
#include<locale.h> // essa biblioteca tem a função de adicionar a acentuação para poder usar em alguma linguagem especifica, quando eu adiciono coloco em aberto para aceitar todas as 
// acentuações de todas as lingaguens


main(){ // O main no codigo é a sua função principal. Mais pra frente vocês verão como montar funções, a ideia é que vocês podem usar o main como centro do codigo em praticamente tuto rsrs
setlocale(LC_ALL, ""); // Comando para adicionar a acentuação no codigo atraves da biblioteca locale declarada e incluida no codigo mais a cima
printf("Ola mundo"); // printf é um comando classificado output, ou seja, é para o usuario visualizar. É a sua resposta na tela. A sua comunição com o mundo exterior
printf("\t\tOlaaaaaaaaaaaaaaaaaaaaaaaa"); // No final de cada comando em C devesse colocar ponto e virgula, para o computador, através do compilador, assimilar que aqui é o final da linha e 
// o final desse comando, se não o codigo da erro 
printf("\n\n E aiiiiiiiiiiii????") // existem comandos que podesse usar para controlar o espaçamento plotado na nela com relação ao texto
printf("\tAgora eu tenho acento. \nÉééééééééééééé")// O comando \t da um tab na linha, e o comando \n da um espaço para baixo

system("pause"); // Esse é um comando oldSchool. Em versões anteriores a tela não pausava, por isso usavamos esse comando para pausa-la. Coloco a nivel de informação 
}
