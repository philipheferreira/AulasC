#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*O for � a primeira estrutura de repeti��o estudada, e uma das mais importantes. O objetivo da estrutura de repeti��o � repetir comandos e com isso repetir tudo que estiver predefinido dentro dele. A funcionalidade dele est� em 3 partes.  
como pode ver o for est� organizado com uma serie de 3 partes, que podem ser divididas da seguinte forma => for(inicio, fim, caminho). Eu vejo dessa forma para facilitar, pois na primeira parte mostra em qual valor a repeti��o do for ira
come�ar, no caso do exemplo, em 1. Logo em seguida � definido onde ira terminar, que no caso � estabelecido como x � menor e igual a sete. Significa que quando x for 6, o la�o de repeti��o de for vai encerrar.
*/

main(){ 
setlocale(LC_ALL, "");
int x = 0;

for(x = 1; x <= 7; x = x + 1 ){ 
	printf("x � igual a %i\n", x);
}

system("pause");
}
