#include<stdio.h>

#define PI 3.14159
#define NULO 0

double areaCirculo(double raio){
	return raio * raio * PI;
}

int main(void){
	
	double areaCirculo(double raio);
	double r;
	int i = 3;
	
	while(i != NULO){
		printf("Digite o raio do circulo: ");
		scanf("%lf", &r);
		printf("A area do circulo e %lf\n", areaCirculo(r));
		--i; /* Encerra o ciclo depois de 3 tentativas */
	}
	
	system("pause");
	return 0;
}


