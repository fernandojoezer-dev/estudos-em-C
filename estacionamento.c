//usando switch case 

#include<stdio.h>

int main(){
	int opcao, horas,valor, desconto, total;
	printf("1-moto\n");
	printf("2-carro\n");
	printf("3-suv\n");
	printf("escolha a categoria do seu veiculo:\n");
	scanf("%d", &opcao);
	printf("digite a quantidade de hora:\n");
	scanf("%d", &horas);
	
	switch(opcao){
		case 1:
			valor=4;
			break;
		case 2:
			valor=7;
			break;
		case 3:
			valor=10;
			break;
		default:
			printf("erro");
			break;
	}
	
	total= valor*horas;
	desconto= total-(total/10);
	
	if (opcao== 1){
		printf("valor total igual a %d", total);
	}
	else if(opcao ==2){
		printf("valor total igual a %d", total);
	}
	else if(opcao == 3){
		printf("valor total com desconto e igua a %d", desconto);
	}
	else{
		printf("digite uma opcao valida");
	}
	
	
	return 0;
}