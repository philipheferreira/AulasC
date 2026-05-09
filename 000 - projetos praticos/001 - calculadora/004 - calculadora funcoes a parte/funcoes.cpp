	int funcaoReceberValorPrimeiroNumeroOperacoes(){
		int numero1;
		printf("Digite um valor para o numero 1: ");
		scanf("%i", &numero1);
		return numero1;
	}
	
	int funcaoReceberValorSegundoNumeroOperacoes(){
		int numero2;
		printf("Digite um valor para o numero 2: ");
		scanf("%i", &numero2);
		return numero2;
	}

	int operacaoSoma (int numero1, int numero2){
		int resultado;
		
		resultado = numero1 + numero2;
		
		return resultado;
	}
	
	int operacaoSubtracao (int numero1, int numero2){
		return numero1 - numero2;
	}
	
	int operacaoMultiplicacao (int numero1, int numero2){
		return numero1 * numero2;
	}
	
	float operacaoDivisao (float numero1, float numero2){
		float resultado;
		resultado = numero1/numero2;
		return resultado;
	}