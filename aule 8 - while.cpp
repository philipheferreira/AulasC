#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


main(){ 
setlocale(LC_ALL, "");
int x = 0;

while( x < 5){ // � especificado entre os parenteses qual � a condi��o para a repeti��o ser encerrada. Quando o valor de x for maior que 5
	printf("%i\n", x);// aqui foi definido que ira mostrar o valor de x em cada repeti��o.
	++x; // no final de todo o processo sera adicionado +1 a x. logo em algum momento x ser� maior que 5.
}

system("pause");
}
