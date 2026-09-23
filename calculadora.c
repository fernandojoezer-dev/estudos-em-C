#include<stdio.h>

int main(){
	int num01,num02,op;
	
	printf("digite o seu num01:");
	scanf("%d", &num01);
	
	printf("digite o seu num02:");
	scanf("%d", &num02);
	
	printf("1-multiplicacao\n");
	printf("2-divisao\n");
	printf("3-soma\n");
	printf("4-subtracao\n");
	printf("escolha a sua opcao:\n");
	scanf("%d", &op);
	
	int multiplicacao=num01*num02;
	int divisao=num01/num02;
	int soma=num01+num02;
	int subtracao=num01-num02;
	
	switch(op){
		case 1:
			printf("resultado %d", multiplicacao);
			break;
		case 2:
			printf("resultado %d", divisao);
			break;
		case 3:
			printf("resultado %d", soma);
			break;
		case 4:
			printf("resultado %d", subtracao);
			break;
		default:
			printf("opcao invalida, escolha uma das opcoes validas!");
	}
	
	
	return 0;
}