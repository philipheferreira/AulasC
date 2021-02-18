#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


main(){ 
setlocale(LC_ALL, "");
int x = 0;

while( x != 0){ 
	printf("#####o valor de x é diferente de zero %i\n");
}

do{ 
	printf("#O valor de x é diferente de 0\n");
}while(x != 0);

system("pause");
}
