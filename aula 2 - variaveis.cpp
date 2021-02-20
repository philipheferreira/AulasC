#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

 int Gvariavel; // � uma variavel global com o objetivo de ser chamada no codigo por qualquer fun��o declarada no codigo. A variavel global � um recurso bastante util, entretanto pode pegar bastante recurso computacional, pois dependendo de como for utilizada aloca bastante uso de memoria

main(){ 
setlocale(LC_ALL, "");

/*        ###################AVISO########################################
        Vari�vel � um local reservado na mem�ria para armazenar um tipo de dado. Toda vari�vel deve ter um identificador, ou seja um nome. Al�m de ter um nome, a vari�vel tamb�m precisa ter
		um tipo. O tipo de dado de uma vari�vel determina o que ela � capaz de armazenar.
		Os tipos de variaveis mais comuns s�o: 
		int: armazena valores num�ricos inteiros.

		char: armazena caracteres.

		float: armazena n�meros com ponto flutuante (reais) com precis�o simples.

		double: armazena n�meros com ponto flutuante, com precis�o dupla, ou seja normalmente possui o dobro da capacidade de uma vari�vel do tipo float.             
		 
		 
		Em C devemos listar primeiro o tipo, depois o nome da vari�vel: <tipo> <nome_da_vari�vel>;
		            
					Devemos observar algumas regras para criar os identificadores das vari�veis.

		O nome de uma vari�vel deve sempre iniciar com uma letra ou com _ , jamais deve iniciar com um n�mero.

		Exemplo:

			float total2; // est� correto

			float 2total; //est� errado, pois n�o iniciou com uma letra.

		Como visto, o nome de uma vari�vel pode conter d�gitos em qualquer posi��o, menos na primeira.
		Utilize nomes representativos

		Exemplo:

			float salario;

		Neste exemplo o nome da vari�vel j� diz o que ela vai armazenar.           */



int numero = 2; // int � referente aos numero inteiros, voc� armazena variaveis do tipo inteiro, ou seja, � requisitado um endere�amento do tipo inteiro para o valor ser salvo.
int short numero1 = 4; // podesse usar o int combinado com o short para reduzir a quantidade de memoria alocada para exercer suas fun��es 
int long numero2 = 16; // podesse usar o tipo long com o int para aumentar a quantidade de memoria para armazenar valores caso seja necessario
double numero3 = 30.45; // o double � uma variavel com ponto flutuante, assim como o float, mas armazena o dobro de memoria que ele
double long numero4 = 50.60; // o double long armazena bem mais memoria caso seja necessario.
float numero5 = 10.20; // float � uma variavel inteira com ponto flutuante, voc� pode salvar valores com um . para ter maior precis�o nos calculos mais complexos
char letra = 'C'; // char tem o objetivo de saltar letras. � bastante util para salvar informa��es especificas.
char nome[20] = "Philiphe"; // o char pode ser usado para salvar uma palavra completa de uma forma um pouco n�o ortodoxa, mais a frente sera comentado mas se pode salvar char dessa forma. coloquei aqui a nivel de informa��o


printf("a variavel do tipo inteira com o nome numero salvou um valor que � %i, que est� salva na memoria requisitada pelo\n sistema. O seu endere�amento � %i e ela aloca %i bytes\n\n", numero, &numero, sizeof(numero));
/* O codigo acima usa o recurso %i para chamar um valor inteiro qualquer no comando printf, entretanto depois das aspas separada por uma virgula � especificada qual valor inteiro � chamado
assim podendo chamar a variavel nome do tipo inteiro no printf. O &numero mostra o endere�amento que a variavel foi salva, e o comando sizeof() mostra o tamanho que a variavel nome aloca, 
por ela ser do tipo inteira ela pega 4 Bytes de memoria. */

printf("a variavel do tipo inteira short com o nome numero1 salvou um valor que � %i, que est� salva na memoria requisitada pelo\n sistema. O seu endere�amento � %i e ela aloca %i bytes\n\n",numero1, &numero1, sizeof(numero1));
// observasse que a variavel do tipo int short aloca menos memoria que s� a int. A int aloca 4 e a int short aloca 2 bytes, caso n�o precise armazenar tantos dados para a variavel. 
// a variavel int short � chamada no printf pelo %i. 

printf("a variavel do tipo inteira long com o nome numero2 salvou um valor que � %i, que est� salva na memoria requisitada pelo\n sistema. O seu endere�amento � %i e ela aloca %i bytes\n\n",numero2, &numero2, sizeof(numero2));
// a variavel do tipo inteira long aloca mais uso de memoria para funcioanr. Ela exige 8 bytes. O %i � o que chama a variavel do tipo int long

printf("a variavel do tipo Double com o nome numero3 salvou um valor que � %lf, que est� salva na memoria requisitada pelo\n sistema. O seu endere�amento � %i e ela aloca %i bytes\n\n",numero3, &numero3, sizeof(numero3));
// para aparecer o valor armazenado na variavel do tipo double no printf devesse colocar %lf nas aspas

printf("a variavel do tipo Double long com o nome numero4 salvou um valor que � %lf, que est� salva na memoria requisitada\n pelo sistema. O seu endere�amento � %i e ela aloca %i bytes\n\n",numero4, &numero4, sizeof(numero4));


printf("a variavel do tipo float com o nome numero5 salvou um valor que � %f, que est� salva na memoria requisitada pelo\n sistema. O seu endere�amento � %i e ela aloca %i bytes\n\n",numero5, &numero5, sizeof(numero5));
// para aparecer o valor armazenado na variavel do tipo float no printf devesse colocar %f nas aspas

printf("a variavel do tipo character com o nome letra salvou um valor que � %c, que est� salva na memoria requisitada pelo\n sistema. O seu endere�amento � %i e ela aloca %i bytes\n\n",letra, &letra, sizeof(letra));
// para aparecer o valor armazenado na variavel do tipo char no printf devesse colocar %c nas aspas

system("pause");
}
