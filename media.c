#include<stdio.h>
#define TAM_NOME 50
int main(){
    char nome[TAM_NOME];
    float av01;
    float av02;
    float av03;

    printf("digite o seu nome:");
    fgets(nome, TAM_NOME, stdin);

    printf("digite a sua av01:");
    scanf("%f", &av01);

    printf("digite a sua av02:");
    scanf("%f", &av02);

    printf("digite a usa av03:");
    scanf("%f", &av03);

    float media= (av01+av02+av03)/3;

    printf("***DADOS***\n");

    printf("nome do aluno:%s|media: %.2f \n", nome, media);

    
    if (media>=6){
        printf("aprovado");
    }

    else{
        printf("reprovado\n");
    }



    return 0;
}