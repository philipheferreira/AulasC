#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#define MAX 5

typedef struct {
		int dados[MAX];
		int topo;
	} Pilha; // estrutura base para a criacao da pilha
	
	// Funcao criar pilha
	void inicializarPilha(Pilha *p) {
		p -> topo = -1; // -1 indica que a pilha esta vazia
	}
	
	//Funcao para verificar se a pilha esta cheia
	int funcaoVerificarPilhaCheia(Pilha *p) {
		if (p->topo == MAX - 1) {
	        return 1; // Verdadeiro
	    } else {
	        return 0; // Falso
	    }
	}
	
	int funcaoVerificarPilhaVazia(Pilha *p){
    	if (p->topo == -1) {
	        return 1; // Verdadeiro
	    } else {
	        return 0; // Falso
	    }
	}
	
	//Função EMPILHAR (Push)
	void funcaoEmpilhar(Pilha *p, int valor){
		if (funcaoVerificarPilhaCheia(p)) {
	        printf("Erro: A pilha está cheia!\n");
	    } else {
	        p->topo++; // Sobe o índice do topo
	        p->dados[p->topo] = valor; // Adiciona o valor na nova posição do topo
	        printf("Valor %d empilhado com sucesso.\n", valor);
	    }
	}
	
	void funcaoDesempilhar(Pilha *p){
		if (funcaoVerificarPilhaVazia(p)) {
	        printf("Erro: A pilha está vazia! Não há o que remover.\n");
	    } else {
	        int valorRemovido = p->dados[p->topo]; // Pega o valor do topo
	        p->topo--; // Desce o índice do topo
	        printf("Valor %d desempilhado.\n", valorRemovido);
	    }
	}
	
	void verTopo(Pilha *p){
		if(funcaoVerificarPilhaVazia(p)){
			printf("A pilha esta vazia.\n");
		}else{
			printf("O topo da pilha e: %i\n", p->dados[p->topo]);
		}
	}

main(){
	
	setlocale(LC_ALL, "portuguese");
	//struct base Pilha; // cria a pilha usando o struct base
	
	Pilha p;
	
    inicializarPilha(&p); // Inicializa a pilha

    // Testando a lógica
    funcaoEmpilhar(&p, 10);
    funcaoEmpilhar(&p, 20);
    funcaoEmpilhar(&p, 30);
    
    verTopo(&p); // Deve mostrar 30
    
    funcaoDesempilhar(&p); // Remove o 30
    verTopo(&p);     // Deve mostrar 20
    
    funcaoDesempilhar(&p); // Remove o 20
    funcaoDesempilhar(&p); // Remove o 10
    
    funcaoDesempilhar(&p); // Vai dar erro, pois a pilha está vazia
	
	
}

