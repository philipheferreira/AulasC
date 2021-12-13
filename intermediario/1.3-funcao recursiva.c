#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

	int funcao( int num){
  if (num == 0) {
    return 1;
  }
  else {
    return num * funcao(num -1);
  }
}


	int main(){ 
	setlocale(LC_ALL, "");
	
	int num;
    num = 3;
    
    printf("\nfatR(%d) = %d", num, funcao(num));
	
	
	system("pause");
	}
