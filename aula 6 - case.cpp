#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


main(){ 
setlocale(LC_ALL, "");
int x = 4;

switch(x){ 
	case 1: 
		printf("O valor de x � igual a 1");
	break;
		
	case 2: 
		printf("O valor de x � igual a 2");
	break;
		
	case 3: 
		printf("O valor de x � igual a 3");
	break;
	
	case 4: 
		printf("O valor de x � igual a 4");
	break;
	
	default: 
		printf("O valor de x n�o � nenhuma op��o anterior");
	break;
}



system("pause");
}
