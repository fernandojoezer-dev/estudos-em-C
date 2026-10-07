//usando while para fazer um menu basico/using while to make a basic menu with options

#include<stdio.h>

int main(){
    int n1,n2,op;

    while(op !=3){
        printf("digite o seu n1:");
        scanf("%d", &n1);
        printf("digite o seu n2:");
        scanf("%d", &n2);
        printf("1-somar numeros\n");
        printf("2-multiplicar numeros\n");
        printf("3-sair do programa\n");
        printf("digite a sua opcao:\n");
        scanf("%d", &op);

        if (op==1){
            printf("resultado: %d+%d=%d\n", n1,n2,n1+n2);
        }
        else if(op==2){
             printf("resultado: %d*%d=%d\n", n1,n2,n1*n2);
        }  
        else if(op==3){
            printf("programa encerrado");
            }
        else{
            printf("digite uma opcao valida entre as 3 opcoes!");
        }

    }
   




    return 0;
}