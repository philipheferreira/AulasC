#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

		/*##################################### AULA 04 ############################################# 
	O comando if � um dos dois comandos do tipo escolha utilizados na linguagem C. O comando if permite voc� trabalhar com situa��es especificas que envolvem mais de uma variavel e condi��es
	diferentes, que quando atendidas acionam um trecho do codigo que � ativado s� quando essa especifica��o � atendida.
		*/
main(){ 

setlocale(LC_ALL, "");

int x = 3; // quando tiver apenas um sinal de igualdade, significa que x recebe o valor 3

if(x == 3){ // informando que quando a varialvel vier antes de 2 sinais de igualdade, significa que � para determinar a situa��o quando x for igual a 3, e n�o que o valor de x � 3
	printf(" x � igual a 3\n"); // O que estiver entre as chaves {} ira acontecer quando a condi��o x == 3 for estabelecida, nesse caso ser� printada a frase x � igual a 3
}else{ // o else � qualquer outra situa��o que n�o preencha a situa��o if, ou seja, todo o resto.
	printf("x n�o � igual a 3\n"); // o que est� entre a chave de else � esse printf que ira plotar na tela a frase de que x n�o � igual a 3
}


system("pause");
}
