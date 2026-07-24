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
	file = fopen("C:/Users/phili/Documents/estudo/C/AulasC/003 - Avancado/35-stringsDeAppend.txt", "a"); /* Anexar, representado por a, ser a operacao de 
	criar caso nao exista, e caso exista e ja tenha algo adiciona mais informacao no que ja existe */
	
	if(file == NULL){
		printf("Arquivo nao pode ser aberto.\n\n");
		system("pause");
	}
	
	fprintf(file, "Primeira linha\n\n");
	
	
	char frase[] = "segunda linha"; /* adiciona um vetor de caracteres */
	fputs(frase, file); /* adiciona um string em um arquivo, declara a variavel
	string a ser adicionada, e em seguina necessita 
	especificar o arquivo que sera adicionado */
	
	char caractere = '10';
	fputc(caractere, file); /* adiciona caractere no arquivo */
	
	printf ("Variaveis adicionadas com sucesso em arquivo");
	
	fclose(file);
	
	printf("\n\n");
	
	system("pause");
}


