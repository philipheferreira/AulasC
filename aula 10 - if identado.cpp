#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 
	O objetivo da endenta��o � que seja uma organiza��o pratica e rapida de compreen��o. No caso o programador visualize e compreenda rapidamente o que est� acontecendo e com
	que intuito. Entrentanto algumas linguagens usam isso como parametro para identificar qual comando segue ou est� dentro de qual estrutura de comando. A linguagem C consegue 
	realizar esse tipo de comando para alguns simples e que funcionam sem utilizar muitas linhas como o exemplo a baixo. Lembrando que C � uma linguagem que funciona com o uso 
	de chaves para essa fun��o, mas ainda sim � um recurso que pode ser usado como no exemplo a baixo com a estrutura de comando de escolha if.
*/


int main(){ 
setlocale(LC_ALL, "");
int x; 

printf("Digite o valor de X: ");
scanf("%i", &x);

if(x ==1) 
	printf("O valor de x � igual a 1");
else if(x == 2) 
	printf("o valor � 2");
else 
	printf("O valor n�o � 1");



system("pause");
}
