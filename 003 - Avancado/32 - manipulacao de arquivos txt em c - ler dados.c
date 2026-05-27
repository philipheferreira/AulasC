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
	file = fopen("C:\\Users\\phili\\Documents\\estudo\\C\\AulasC\\003 - Avancado\\32-strings.txt", "r");
	
	if(file == NULL){
		printf("Arquivo nao pode ser aberto.\n\n");
		system("pause");
	}
	
	
	char frase[100];
	
	while(fgets(frase, 100, file) != NULL){ /* fgtes(file get string) recebe 3 parametros (a variavel a ser repassada, 
	o tamanho e o arquivo que ela vai ser usado). ela recebe as strings ate o valor ter vazio, ou seja, a ser
    igual a zero */
		printf("%s", frase);
	}
	
	/*
	outras formas de fazer:
	fgets(frase, 100, file);
		printf("%s", frase);
	Nesse caso continuara rodando mas ira receber apenas a primeira frase,
	ou seja, ate encontrar a quebra de linha
	
	Outra forma de fazer:
	fscanf(file, "%s", c);
	printf("%s", c);
	Fazendo dessa forma irei receber apenas uma palavra
	 */
	fclose(file);
	
	printf("\n\n");
	
	system("pause");
}


