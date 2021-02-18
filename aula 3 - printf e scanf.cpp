#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){ 
setlocale(LC_ALL, "");

int x = 10;
int y;
printf("O valor de x È igual a %i\n", x);

printf("DÍ um valor para y: ");
scanf("%i", &y);

printf("\nO valor que voc  deu para y È %i\n", y);

system("pause");
}
