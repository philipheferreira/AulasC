#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*O for é a primeira estrutura de repetição estudada, e uma das mais importantes. O objetivo da estrutura de repetição é repetir comandos e com isso repetir tudo que estiver predefinido dentro dele. A funcionalidade dele está em 3 partes.  
como pode ver o for está organizado com uma serie de 3 partes, que podem ser divididas da seguinte forma => for(inicio, fim, caminho). Eu vejo dessa forma para facilitar, pois na primeira parte mostra em qual valor a repetição do for ira
começar, no caso do exemplo, em 1. Logo em seguida é definido onde ira terminar, que no caso é estabelecido como x é menor e igual a sete. Significa que quando x for 6, o laço de repetição de for vai encerrar.
*/

main(){ 
setlocale(LC_ALL, "");
int x = 0;

for(x = 1; x <= 7; x = x + 1 ){ 
	printf("x é igual a %i\n", x);
}

system("pause");
}
