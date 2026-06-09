#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

#define MAX 5

// Aqui definimos a estrutura 'base' e já criamos uma variável GLOBAL chamada 'Pilha'
struct base {
    int dados[MAX];
    int topo;
} Pilha; 

// Funcao criar pilha (Não recebe mais parâmetros)
void inicializarPilha() {
    Pilha.topo = -1; // Acessa a variável global diretamente
}

// Funcao para verificar se a pilha esta cheia
int funcaoVerificarPilhaCheia() {
    if (Pilha.topo == MAX - 1) {
        return 1; // Verdadeiro
    } else {
        return 0; // Falso
    }
}

int funcaoVerificarPilhaVazia(){
    if (Pilha.topo == -1) {
        return 1; // Verdadeiro
    } else {
        return 0; // Falso
    }
}

// Função EMPILHAR (Push) - Recebe apenas o valor
void funcaoEmpilhar(int valor){
    if (funcaoVerificarPilhaCheia()) {
        printf("Erro: A pilha está cheia!\n");
    } else {
        Pilha.topo++; // Sobe o índice do topo
        Pilha.dados[Pilha.topo] = valor; // Adiciona o valor
        printf("Valor %d empilhado com sucesso.\n", valor);
    }
}

void funcaoDesempilhar(){
    if (funcaoVerificarPilhaVazia()) {
        printf("Erro: A pilha está vazia! Não há o que remover.\n");
    } else {
        int valorRemovido = Pilha.dados[Pilha.topo]; // Pega o valor do topo
        Pilha.topo--; // Desce o índice do topo
        printf("Valor %d desempilhado.\n", valorRemovido);
    }
}

void verTopo(){
    if(funcaoVerificarPilhaVazia()){
        printf("A pilha esta vazia.\n");
    } else {
        printf("O topo da pilha e: %i\n", Pilha.dados[Pilha.topo]);
    }
}

int main(){ 
    setlocale(LC_ALL, "portuguese");
    // Não precisamos mais declarar "Pilha p" aqui, pois ela já existe globalmente.
    
    inicializarPilha(); // Chamada sem argumentos

    // Testando a lógica
    funcaoEmpilhar(10);
    funcaoEmpilhar(20);
    funcaoEmpilhar(30);
    
    verTopo(); // Deve mostrar 30
    
    funcaoDesempilhar(); // Remove o 30
    verTopo();     // Deve mostrar 20
    
    funcaoDesempilhar(); // Remove o 20
    funcaoDesempilhar(); // Remove o 10
    
    funcaoDesempilhar(); // Vai dar erro, pois a pilha está vazia
    
    return 0;
}