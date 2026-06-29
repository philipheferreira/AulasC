#include "012 - cabecalho.h" // O pré-processador cola os protótipos aqui!

/* 

Arquivos de Cabeçalho (Header Files - .h)
Quando você usa o #include, você está dizendo ao pré-processador do C: "Pegue todo o texto deste arquivo e cole aqui exatamente onde está este #include".
Na prática profissional, não colocamos os protótipos diretamente no arquivo principal. Nós os colocamos em um arquivo separado com a extensão .h (header). Portanto, quando você faz #include "meuarquivo.h", você está apenas incluindo os protótipos.

Separação Interface / Implementação (ou Modularização)
Esse é o nome do padrão de arquitetura que você está descrevendo. Ele funciona assim:

A Interface (Arquivo .h): Contém apenas as declarações (protótipos). É como se fosse o "menu" de um restaurante, dizendo o que está disponível.
A Implementação (Arquivo .c): Contém a lógica real, o código que faz as coisas funcionarem (o corpo da função com {}).

*/


int main() {
    // Como os protótipos foram "colados" no topo deste arquivo pelo #include,
    // o compilador já sabe que essas funções existem antes de você chamá-las.
    int resultado = somar(5, 3);
    imprimirMensagem();
    return 0;
}