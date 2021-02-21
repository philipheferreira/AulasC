#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

		/*##################################### AULA 04 ############################################# 
	O comando if é um dos dois comandos do tipo escolha utilizados na linguagem C. O comando if permite você trabalhar com situações especificas que envolvem mais de uma variavel e condições
	diferentes, que quando atendidas acionam um trecho do codigo que é ativado só quando essa especificação é atendida.
		*/
main(){ 

setlocale(LC_ALL, "");

int x = 3; // quando tiver apenas um sinal de igualdade, significa que x recebe o valor 3

if(x == 3){ // informando que quando a varialvel vier antes de 2 sinais de igualdade, significa que é para determinar a situação quando x for igual a 3, e não que o valor de x é 3
	printf(" x é igual a 3\n"); // O que estiver entre as chaves {} ira acontecer quando a condição x == 3 for estabelecida, nesse caso será printada a frase x é igual a 3
}else{ // o else é qualquer outra situação que não preencha a situação if, ou seja, todo o resto.
	printf("x não é igual a 3\n"); // o que está entre a chave de else é esse printf que ira plotar na tela a frase de que x não é igual a 3
}


system("pause");
}
