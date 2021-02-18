#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


main(){ 
setlocale(LC_ALL, "");
int x = 0;

for(x = 1; x <= 7; x = x + 1 ){ 
	printf("x é igual a %i\n", x);
}

system("pause");
}
