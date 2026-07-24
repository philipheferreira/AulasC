#include <stdio.h>

/*
O comando freopen (abreviação de file reopen) na linguagem C serve para reabrir 
um fluxo de dados (stream) já existente e associá-lo a um novo arquivo.

Na prática, ele é usado para redirecionar de onde uma função lê dados ou para 
onde ela escreve dados, sem que você precise alterar as funções de 
entrada/saída padrão (como printf, scanf, puts, etc.) no resto do seu código.

FILE *freopen(const char *filename, const char *mode, FILE *stream);

*filename: O caminho (nome) do arquivo que você quer abrir.

*mode: O modo de abertura (ex: "r" para leitura, "w" para escrita, "a" para 
adicionar).
*stream: O ponteiro de arquivo que será redirecionado. Os mais comuns são 
stdin (entrada padrão - teclado), stdout (saída padrão - tela) ou stderr 
(saída de erros - tela).

Retorno
Retorna o ponteiro para o arquivo recém-aberto em caso de sucesso.
Retorna NULL se houver erro na abertura do arquivo.
O Grande Truque do freopen
A utilidade mais famosa do freopen é redirecionar o stdin e o stdout.

Normalmente:

O scanf lê do teclado (porque está ligado ao stdin).
O printf escreve na tela (porque está ligado ao stdout).
 */

int main() {
	
	char x[100];
	
	FILE *file = fopen("C:/Users/phili/Documents/estudo/C/AulasC/003 - Avancado/38-arquivo1.txt", "r");
	
	fgets(x, 100, file);
	printf("%s\n", x);
	
	freopen("C:/Users/phili/Documents/estudo/C/AulasC/003 - Avancado/39-arquivo2.txt", "r", file);
	fgets(x, 100, file);
	printf("%s\n", x);
}