#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){ 
setlocale(LC_ALL, "");

int x = 10;
int y;
printf("O valor de x � igual a %i\n", x);

printf("D� um valor para y: ");
scanf("%i", &y);

printf("\nO valor que voc� deu para y � %i\n", y);

system("pause");
}
