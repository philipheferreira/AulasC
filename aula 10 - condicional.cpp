#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){ 
setlocale(LC_ALL, "");
int x = 20, y = 10; 
int result;
char c;

x > y ? printf("x � maior que y\n") : printf("y � maior que x\n");

x > y ? result = 30 : c = 'p'; 

x > y ? printf("O valor de result � %i\n", result) : printf("o valor de c � %c\n", c); 

system("pause");
}
