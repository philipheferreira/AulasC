#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

#define MAX 5

// Apenas a definição da estrutura (o "molde"). 
// Note que removemos a criação da variável "Pilha" daqui.
struct base {
    int dados[MAX];
    int topo;
};

// Funcao criar pilha (Recebe o endereço da struct)
void inicializarPilha(struct base *p) {
    p->topo = -1; 
}

// Funcao para verificar se a pilha esta cheia
int funcaoVerificarPilhaCheia(struct base *p) {
    if (p->topo == MAX - 1) {
        return 1; 
    } else {
        return 0; 
    }
}

int funcaoVerificarPilhaVazia(struct base *p){
    if (p->topo == -1) {
        return 1; 
    } else {
        return 0; 
    }
}

// Função EMPILHAR (Push)
void funcaoEmpilhar(struct base *p, int valor){
    if (funcaoVerificarPilhaCheia(p)) {
        printf("Erro: A pilha está cheia!\n");
    } else {
        p->topo++; 
        p->dados[p->topo] = valor; 
        printf("Valor %d empilhado com sucesso.\n", valor);
    }
}

void funcaoDesempilhar(struct base *p){
    if (funcaoVerificarPilhaVazia(p)) {
        printf("Erro: A pilha está vazia! Não há o que remover.\n");
    } else {
        int valorRemovido = p->dados[p->topo]; 
        p->topo--; 
        printf("Valor %d desempilhado.\n", valorRemovido);
    }
}

void verTopo(struct base *p){
    if(funcaoVerificarPilhaVazia(p)){
        printf("A pilha esta vazia.\n");
    } else {
        printf("O topo da pilha e: %i\n", p->dados[p->topo]);
    }
}

int main(){ 
    setlocale(LC_ALL, "portuguese");
    struct base Pilha; 
    
    inicializarPilha(&Pilha); 

    funcaoEmpilhar(&Pilha, 10);
    funcaoEmpilhar(&Pilha, 20);
    funcaoEmpilhar(&Pilha, 30);
    
    verTopo(&Pilha); // Deve mostrar 30
    
    funcaoDesempilhar(&Pilha); // Remove o 30
    verTopo(&Pilha);     // Deve mostrar 20
    
    funcaoDesempilhar(&Pilha); // Remove o 20
    funcaoDesempilhar(&Pilha); // Remove o 10
    
    funcaoDesempilhar(&Pilha); // Vai dar erro, pois a pilha está vazia
    
    return 0;
}