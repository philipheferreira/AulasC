#include<stdio.h>
#include<locale.h>

/*dentro dos comandos file tem letras que serao utilizadas com fpen.
Os comandos sao os seguintes:
"r" => inicial de read, so serve para ler as informacoes do arquivo txt
"a" => inicial de append
"w" => vem de write, irei criar e escrever um arquivo txt  */

int main(){ 
	
	void copiarConteudo(FILE *arquivo1, FILE *arquivo2);
	
	setlocale(LC_ALL, "portuguese");
	FILE *arquivo1; 
	arquivo1 = fopen("C:\\Users\\phili\\Documents\\estudo\\C\\AulasC\\003 - Avancado\\34-arquivoQueSeraCopiado.txt", "r"); 
	
	if (arquivo1 == NULL) {
		printf("Nao foi possivel abrir o arquivo.");
	}
	FILE *arquivo2;
	arquivo2 = fopen("C:\\Users\\phili\\Documents\\estudo\\C\\AulasC\\003 - Avancado\\34-arquivoGeradoComACopia.txt", "w"); 
	
	
	
	copiarConteudo(arquivo1, arquivo2);
	
	fclose(arquivo1);
	fclose(arquivo2);
	
	printf("\n\n");
	
	system("pause");
}


void copiarConteudo(FILE *arquivo1, FILE *arquivo2){
	
	char leitor[1000];
	
	while (fgets(leitor, 1000, arquivo1) !=NULL){
		fputs(leitor, arquivo2);
	}
		
}
