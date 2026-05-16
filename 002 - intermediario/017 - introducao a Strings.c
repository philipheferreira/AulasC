#include <stdio.h>
#include<stdlib.h>

int main(void) {
	
	char teste[] = {'B', 'r', 'a', 's', 'i', 'l'};
	
	int i;
	for(i = 0; i < 6; ++i){
		printf("%c", teste[i]);
	}
		
	printf("\n");
	
	system("pause");
}