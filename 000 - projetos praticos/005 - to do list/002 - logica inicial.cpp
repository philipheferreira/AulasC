#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Uma estrutura (struct) para guardar o texto da tarefa e o status (se foi feita ou não).
Um vetor (array) para armazenar várias tarefas.
Lógica dentro dos if para manipular esse vetor (adicionar, mostrar, editar, remover).
 */

#define MAX_TAREFAS 100
#define TAMANHO_DESCRICAO 100

int main() {
    int menu;
	
	do{
		printf("\n=== TODO LIST ===\n");
	    printf("1. Adicionar Tarefa\n");
	    printf("2. Listar Tarefas\n");
	    printf("3. Marcar como Concluida\n");
	    printf("4. Deletar Tarefa\n");
	    printf("5. Sair\n");
	    printf("Escolha uma opcao: ");
	    scanf("%d", &menu);
	    if(menu == 1){
			
		}else
		if(menu == 2){
			
		}else
		if(menu == 3){
			
		}else
		if(menu == 4){
			
		}else
		if(menu == 5){
			
		}else{
			printf("Voce nao escolheu nenhuma opcao anterior. escolha uma opcao do menu.");
		}
	}while( menu != 5);
        

}

