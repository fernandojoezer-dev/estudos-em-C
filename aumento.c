#include<stdio.h>
#define TAM_NOME 50
int main(){
    char nome[TAM_NOME];
    float salario;

    printf("digite o seu nome:");
    fgets(nome, TAM_NOME, stdin);
    
    printf("digite o salario:");
    scanf("%f", &salario);
    
    float calculo= (salario*0.08);
    float total=salario+calculo;

    printf("dados\n");
    printf("nome: %s | salario: %.2f", nome, total);
    
    
    
    return 0;
}