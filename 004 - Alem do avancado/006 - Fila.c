#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

#define MAX 5

// Definição da estrutura (o "molde") da Fila
struct fila {
    int dados[MAX];
    int inicio;
    int fim;
};

// Função para inicializar a fila
void inicializarFila(struct fila *f) {
    f->inicio = 0; // O início começa no índice 0
    f->fim = -1;   // O fim começa em -1 (vazio)
}

// Verifica se a fila está cheia
int verificarFilaCheia(struct fila *f) {
    if (f->fim == MAX - 1) {
        return 1; // Verdadeiro
    } else {
        return 0; // Falso
    }
}

// Verifica se a fila está vazia
int verificarFilaVazia(struct fila *f) {
    // Se o início passou o fim, a fila esvaziou
    if (f->inicio > f->fim) {
        return 1; // Verdadeiro
    } else {
        return 0; // Falso
    }
}

// Função ENFILEIRAR (Inserir)
void enfileirar(struct fila *f, int valor) {
    if (verificarFilaCheia(f)) {
        printf("Erro: A fila está cheia!\n");
    } else {
        f->fim++; // Avança o fim
        f->dados[f->fim] = valor; // Adiciona o valor
        printf("Valor %d enfileirado com sucesso.\n", valor);
    }
}

// Função DESENFILEIRAR (Remover)
void desenfileirar(struct fila *f) {
    if (verificarFilaVazia(f)) {
        printf("Erro: A fila está vazia! Não há o que remover.\n");
    } else {
        int valorRemovido = f->dados[f->inicio]; // Pega o valor do início
        f->inicio++; // Avança o início (o próximo da fila passa a ser o primeiro)
        printf("Valor %d desenfileirado (atendido).\n", valorRemovido);
    }
}

// Função para ver quem é o primeiro da fila
void verInicio(struct fila *f) {
    if (verificarFilaVazia(f)) {
        printf("A fila esta vazia.\n");
    } else {
        printf("O primeiro da fila e: %i\n", f->dados[f->inicio]);
    }
}

// Função para esvaziar/resetar a fila
void esvaziarFila(struct fila *f){
    f->inicio = 0;
    f->fim = -1;
    printf("Fila resetada.\n");
}

int main() { 
    setlocale(LC_ALL, "portuguese");
    // Criação da variável 'f' do tipo struct fila
    struct fila f;
    
    inicializarFila(&f); 

    // Testando a lógica
    enfileirar(&f, 10); // Entrou: 10
    enfileirar(&f, 20); // Entrou: 20
    enfileirar(&f, 30); // Entrou: 30
    
    verInicio(&f); // Deve mostrar 10 (quem chegou primeiro)
    
    desenfileirar(&f); // Sai o 10
    verInicio(&f);     // Deve mostrar 20 (agora ele é o primeiro)
    
    desenfileirar(&f); // Sai o 20
    desenfileirar(&f); // Sai o 30
    
    desenfileirar(&f); // Vai dar erro, pois a fila está vazia
    
    return 0;
}