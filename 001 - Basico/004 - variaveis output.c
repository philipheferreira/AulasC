#include<stdio.h> 
#include<stdlib.h>
#include<locale.h>

//exemplos de chamadas diferentes printando valores diferentes 

main(){ 
setlocale(LC_ALL, "");

int intVar = 9999999; 
int intVar2 = 10;
double doubleVar = 100.123456789;


// Formatacao variaveis inteiras
printf("Variavel inteira(%%d) = %d\n", intVar2);
printf("Variavel inteira(%%i) = %i\n", intVar);
printf("Variavel inteira(%%x) = %x\n", intVar);
printf("Variavel inteira(%%o) = %o\n", intVar);
printf("\n");

//Formatacao variaveis float e double
printf("Variavel double(%%f) = %f\n", doubleVar);
printf("Variavel double(%%e) = %e\n", doubleVar);
printf("Variavel double(%%g) = %g\n", doubleVar);
printf("Variavel double(%%a) = %a\n", doubleVar);


system("pause");
}
