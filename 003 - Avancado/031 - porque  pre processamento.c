#include <stdio.h>

#define PI 3.14159 /* Antes do codigo ser compilado, no preprocessamento,
tudo que for PI dentro do codigo sera substituido por 3.14159. Se eu usar ;
aqui no define ele vai rodar junto no valor substituido no codigo compilado.
Ou seja, o ; sera jogado junto com o codigo, por isso nao sera utilizado
; nessa parte e sim so espacamento. O espacamento ser computado nessa parte,
diferente na parte do programa gerado no main que nao ser tao necessario,
ou seja o espacamento no main ser mais livre */

/*



 */

int main(void){
	
	printf("%f\n", PI); /* O ; define que a cada parte do codigo ira finalizar
	no compilador */
	
	system("pause");
}