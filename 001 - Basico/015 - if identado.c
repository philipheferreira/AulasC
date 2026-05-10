#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 
	O objetivo da endentação é que seja uma organização pratica e rapida de compreenção. No caso o programador visualize e compreenda rapidamente o que está acontecendo e com
	que intuito. Entrentanto algumas linguagens usam isso como parametro para identificar qual comando segue ou está dentro de qual estrutura de comando. A linguagem C consegue 
	realizar esse tipo de comando para alguns simples e que funcionam sem utilizar muitas linhas como o exemplo a baixo. Lembrando que C é uma linguagem que funciona com o uso 
	de chaves para essa função, mas ainda sim é um recurso que pode ser usado como no exemplo a baixo com a estrutura de comando de escolha if.
*/


int main(){ 
setlocale(LC_ALL, "");
int x; 

printf("Digite o valor de X: ");
scanf("%i", &x);

if(x ==1) 
	printf("O valor de x é igual a 1");
else if(x == 2) 
	printf("o valor é 2");
else 
	printf("O valor não é 1");



system("pause");
}
