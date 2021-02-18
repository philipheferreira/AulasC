#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


main(){ 
setlocale(LC_ALL, "");
int x = 0;

while( x < 5){ 
	printf("%i\n", x);
	++x;
}

system("pause");
}
