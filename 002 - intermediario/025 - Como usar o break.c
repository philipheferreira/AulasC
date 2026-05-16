#include <stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Esse codigo foi um exemplo pra constetualizar a aplicacao do break. 
Se fosse um projeto sem o break o codigo ia rodar todo o for ate 20, mas como
coloquei o break a partir do momento que for encontrado um numero divisivel
por 3 e 9 o sistema ira travar e a busca sera encerrada*/

main() {
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	
	for(i = 1; i <= 20; ++i) {
		if(i % 3 == 0 && i % 9 == 0){
			printf("%i divisel por 3 e 9\n", i);
			break;
		} else {
			printf("%i nao e\n", i);
		}
	}
	getchar();
	
	system("pause");
}
