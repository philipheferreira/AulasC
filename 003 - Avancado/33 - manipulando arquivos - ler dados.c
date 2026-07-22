#include<stdio.h>
#include<locale.h>

/*dentro dos comandos file tem letras que serao utilizadas com fpen.
Os comandos sao os seguintes:
"r" => inicial de read, so serve para ler as informacoes do arquivo txt
"a" => inicial de append
"w" => vem de write, irei criar e escrever um arquivo txt  */

int main(){ 
	
	setlocale(LC_ALL, "portuguese");
	FILE *file; /* Criando um ponteiro file para gerar o arquivo txt */
	file = fopen("C:\\Users\\phili\\Documents\\estudo\\C\\AulasC\\003 - Avancado\\33-numeros.txt", "r");
	
	if(file == NULL){
		printf("Arquivo nao pode ser aberto.\n\n");
		system("pause");
	}
	
	
	int x, y, z;
	
	fscanf(file, "%i %i %i", &x, &y, &z); /* O scanf ira pegar qualquer dado e 
	ler o que foi declarado nele e receber. De acordo com o que foi pre 
	definido, ou seja inteiros. Caso nao sejam inteiros dara defeito */
	
	printf("%i %i %i\n\n", x, y, z);
	
	fclose(file);
	
	
	system("pause");
}


