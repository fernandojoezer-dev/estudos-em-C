//programa validação e classificação de triângulos
//program of validation and classification of triangles


#include<stdio.h>

int main(){
	int a,b,c,ab,bc,ca;
	
	printf("input a number to a:");
	scanf("%d", &a);
	
	printf("input a number to b:");
	scanf("%d", &b);
	
	printf("input a number to c:");
	scanf("%d", &c);
	
	ab=a+b;
	bc=b+c;
	ca=c+a;
	
	if (a<ab && b<bc && c<ca){
		if(a==b && b==c && c==a){
			printf("seu triangulo e equilatero!");
		}
		else if(a!=b && b!=c && c!=a){
			printf("seu triangulo e escaleno!");
		}
		else{
			printf("seu triangulo e isosceles");
		}
	}else{
		printf("não e um triangulo");
	}
	
	
	
	return 0;
}