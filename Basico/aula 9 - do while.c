#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/*	Este codigo serve para mostrar a diferença do while e do do while. A principal diferença é que no while a verificação ocorre antes do processo começar, e no do while a verificação ocorre
no final do processo, permitindo que o processo no do while ocorra pelo menos uma vez caso a condição já tenha sido atendida

*/
main(){ 
setlocale(LC_ALL, "");
int x = 0; // o valor é zero

while( x != 0){ // a condição para que o codigo rode é que x seja diferente de zero, como a condição já foi atendida e a verificação ocorre no inicio o codigo não ira rodar
	printf("#####o valor de x é diferente de zero %i\n");
}

do{ 
	printf("#O valor de x é diferente de 0\n");
}while(x != 0); // no do while a condição já foi atendida, mas a verificação só ocorre no final, permitindo que o codigo rode pelo menos uma vez antes de ser encerrado 

system("pause");
}
