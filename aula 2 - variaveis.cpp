#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

 int Gvariavel; // � uma variavel global com o objetivo de ser chamada no codigo por qualquer fun��o declarada no codigo. A variavel global � um recurso bastante util, entretanto pode pegar bastante recurso computacional, pois dependendo de como for utilizada aloca bastante uso de memoria

main(){ 
setlocale(LC_ALL, "");
int numero = 2; // int � referente aos numero inteiros, voc� armazena variaveis do tipo inteiro, ou seja, � requisitado um endere�amento do tipo inteiro para o valor ser salvo.
int short numero1 = 4; // podesse usar o int combinado com o short para reduzir a quantidade de memoria alocada para exercer suas fun��es 
int long numero2 = 16; // podesse usar o tipo long com o int para aumentar a quantidade de memoria para armazenar valores caso seja necessario
double numero3; // o double � uma variavel com ponto flutuante, assim como o float, mas armazena o dobro de memoria que ele
double long numero5; // o double long armazena bem mais memoria caso seja necessario.
float numero6; // float � uma variavel inteira com ponto flutuante, voc� pode salvar valores com um . para ter maior precis�o nos calculos mais complexos
char letra; // char tem o objetivo de saltar letras. � bastante util para salvar informa��es especificas.
char nome[20]; // o char pode ser usado para salvar uma palavra completa de uma forma um pouco n�o ortodoxa, mais a frente sera comentado mas se pode salvar char dessa forma. coloquei aqui a nivel de informa��o


printf("a variavel do tipo inteira com o nome numero salvou um valor que � %i, que est� salva na memoria requisitada pelo\n sistema. O seu endere�amento � %i e ela aloca %i bytes\n\n", numero, &numero, sizeof(numero));
/* O codigo acima usa o recurso %i para chamar um valor inteiro qualquer no comando printf, entretanto depois das aspas separada por uma virgula � especificada qual valor inteiro � chamado
assim podendo chamar a variavel nome do tipo inteiro no printf. O &numero mostra o endere�amento que a variavel foi salva, e o comando sizeof() mostra o tamanho que a variavel nome aloca, 
por ela ser do tipo inteira ela pega 4 Bytes de memoria. */

printf("a variavel do tipo inteira com o nome numero1 salvou um valor que � %i, que est� salva na memoria requisitada pelo\n sistema. O seu endere�amento � %i e ela aloca %i bytes\n\n",numero1, &numero1, sizeof(numero1));
// observasse que a variavel do tipo int short aloca menos memoria que s� a int. A int aloca 4 e a int short aloca 2 bytes, caso n�o precise armazenar tantos dados para a variavel 

printf("a variavel do tipo inteira com o nome numero2 salvou um valor que � %i, que est� salva na memoria requisitada pelo\n sistema. O seu endere�amento � %i e ela aloca %i bytes\n\n",numero2, &numero2, sizeof(numero2));
// a variavel do tipo inteira long aloca mais uso de memoria para funcioanr. Ela exige 8 bytes.


system("pause");
}
