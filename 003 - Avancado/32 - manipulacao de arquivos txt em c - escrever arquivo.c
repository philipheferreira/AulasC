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
	file = fopen("C:/Users/phili/Documents/estudo/C/AulasC/003 - Avancado/30arquivoGeradoAulaManipulacaoArquivo.txt", "w"); /* ira criar um arquivo file a onde eu disser pra criar, e ira realizar
	a operacao de escrever como foi definido em w de write. */
	
	fprintf(file, "pao com mortadela."); /* Ira escrever dentro do arquivo criado.
	Se ja tiver sido criado um arquivo de escrever, ele simplesmente ira sobreescrever
	o que ja foi escrito */
	fclose(file); /* Ira fechar qualquer operacao envolvendo os arquivos */
	
	
	system("pause");
}


