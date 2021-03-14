#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


main(){ 
setlocale(LC_ALL, "");
int x = 0;

while( x < 5){ // é especificado entre os parenteses qual é a condição para a repetição ser encerrada. Quando o valor de x for maior que 5
	printf("%i\n", x);// aqui foi definido que ira mostrar o valor de x em cada repetição.
	++x; // no final de todo o processo sera adicionado +1 a x. logo em algum momento x será maior que 5.
}

system("pause");
}
