#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/*	Este codigo serve para mostrar a diferen�a do while e do do while. A principal diferen�a � que no while a verifica��o ocorre antes do processo come�ar, e no do while a verifica��o ocorre
no final do processo, permitindo que o processo no do while ocorra pelo menos uma vez caso a condi��o j� tenha sido atendida

*/
main(){ 
setlocale(LC_ALL, "");
int x = 0; // o valor � zero

while( x != 0){ // a condi��o para que o codigo rode � que x seja diferente de zero, como a condi��o j� foi atendida e a verifica��o ocorre no inicio o codigo n�o ira rodar
	printf("#####o valor de x � diferente de zero %i\n");
}

do{ 
	printf("#O valor de x � diferente de 0\n");
}while(x != 0); // no do while a condi��o j� foi atendida, mas a verifica��o s� ocorre no final, permitindo que o codigo rode pelo menos uma vez antes de ser encerrado 

system("pause");
}
