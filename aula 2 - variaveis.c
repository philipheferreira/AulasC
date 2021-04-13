#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

 int Gvariavel; // É uma variavel global com o objetivo de ser chamada no codigo por qualquer função declarada no codigo. A variavel global é um recurso bastante util, entretanto pode pegar bastante recurso computacional, pois dependendo de como for utilizada aloca bastante uso de memoria

main(){ 
setlocale(LC_ALL, "");

/*        ###################AVISO########################################
        Variável é um local reservado na memória para armazenar um tipo de dado. Toda variável deve ter um identificador, ou seja um nome. Além de ter um nome, a variável também precisa ter
		um tipo. O tipo de dado de uma variável determina o que ela é capaz de armazenar.
		Os tipos de variaveis mais comuns são: 
		int: armazena valores numéricos inteiros.

		char: armazena caracteres.

		float: armazena números com ponto flutuante (reais) com precisão simples.

		double: armazena números com ponto flutuante, com precisão dupla, ou seja normalmente possui o dobro da capacidade de uma variável do tipo float.             
		 
		 
		Em C devemos listar primeiro o tipo, depois o nome da variável: <tipo> <nome_da_variável>;
		            
					Devemos observar algumas regras para criar os identificadores das variáveis.

		O nome de uma variável deve sempre iniciar com uma letra ou com _ , jamais deve iniciar com um número.

		Exemplo:

			float total2; // está correto

			float 2total; //está errado, pois não iniciou com uma letra.

		Como visto, o nome de uma variável pode conter dígitos em qualquer posição, menos na primeira.
		Utilize nomes representativos

		Exemplo:

			float salario;

		Neste exemplo o nome da variável já diz o que ela vai armazenar.           */



int numero = 2; // int é referente aos numero inteiros, você armazena variaveis do tipo inteiro, ou seja, é requisitado um endereçamento do tipo inteiro para o valor ser salvo.
int short numero1 = 4; // podesse usar o int combinado com o short para reduzir a quantidade de memoria alocada para exercer suas funções 
int long numero2 = 16; // podesse usar o tipo long com o int para aumentar a quantidade de memoria para armazenar valores caso seja necessario
double numero3 = 30.45; // o double é uma variavel com ponto flutuante, assim como o float, mas armazena o dobro de memoria que ele
double long numero4 = 50.60; // o double long armazena bem mais memoria caso seja necessario.
float numero5 = 10.20; // float é uma variavel inteira com ponto flutuante, você pode salvar valores com um . para ter maior precisão nos calculos mais complexos
char letra = 'C'; // char tem o objetivo de saltar letras. É bastante util para salvar informações especificas.
char nome[20] = "Philiphe"; // o char pode ser usado para salvar uma palavra completa de uma forma um pouco não ortodoxa, mais a frente sera comentado mas se pode salvar char dessa forma. coloquei aqui a nivel de informação


printf("a variavel do tipo inteira com o nome numero salvou um valor que é %i, que está salva na memoria requisitada pelo\n sistema. O seu endereçamento é %i e ela aloca %i bytes\n\n", numero, &numero, sizeof(numero));
/* O codigo acima usa o recurso %i para chamar um valor inteiro qualquer no comando printf, entretanto depois das aspas separada por uma virgula é especificada qual valor inteiro é chamado
assim podendo chamar a variavel nome do tipo inteiro no printf. O &numero mostra o endereçamento que a variavel foi salva, e o comando sizeof() mostra o tamanho que a variavel nome aloca, 
por ela ser do tipo inteira ela pega 4 Bytes de memoria. */

printf("a variavel do tipo inteira short com o nome numero1 salvou um valor que é %i, que está salva na memoria requisitada pelo\n sistema. O seu endereçamento é %i e ela aloca %i bytes\n\n",numero1, &numero1, sizeof(numero1));
// observasse que a variavel do tipo int short aloca menos memoria que só a int. A int aloca 4 e a int short aloca 2 bytes, caso não precise armazenar tantos dados para a variavel. 
// a variavel int short é chamada no printf pelo %i. 

printf("a variavel do tipo inteira long com o nome numero2 salvou um valor que é %i, que está salva na memoria requisitada pelo\n sistema. O seu endereçamento é %i e ela aloca %i bytes\n\n",numero2, &numero2, sizeof(numero2));
// a variavel do tipo inteira long aloca mais uso de memoria para funcioanr. Ela exige 8 bytes. O %i é o que chama a variavel do tipo int long

printf("a variavel do tipo Double com o nome numero3 salvou um valor que é %lf, que está salva na memoria requisitada pelo\n sistema. O seu endereçamento é %i e ela aloca %i bytes\n\n",numero3, &numero3, sizeof(numero3));
// para aparecer o valor armazenado na variavel do tipo double no printf devesse colocar %lf nas aspas

printf("a variavel do tipo Double long com o nome numero4 salvou um valor que é %lf, que está salva na memoria requisitada\n pelo sistema. O seu endereçamento é %i e ela aloca %i bytes\n\n",numero4, &numero4, sizeof(numero4));


printf("a variavel do tipo float com o nome numero5 salvou um valor que é %f, que está salva na memoria requisitada pelo\n sistema. O seu endereçamento é %i e ela aloca %i bytes\n\n",numero5, &numero5, sizeof(numero5));
// para aparecer o valor armazenado na variavel do tipo float no printf devesse colocar %f nas aspas

printf("a variavel do tipo character com o nome letra salvou um valor que é %c, que está salva na memoria requisitada pelo\n sistema. O seu endereçamento é %i e ela aloca %i bytes\n\n",letra, &letra, sizeof(letra));
// para aparecer o valor armazenado na variavel do tipo char no printf devesse colocar %c nas aspas

system("pause");
}
