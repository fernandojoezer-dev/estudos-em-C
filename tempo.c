#include<stdio.h>

int main(){
    int hora;

    printf("digite quanto tempo de estacionamento:");
    scanf("%d", &hora);

    if (hora<2){
        printf("valor a pagar de 8.00");
    }
    else if(hora>2 && hora==5){
        printf("valor a pagar de 15.00");
    }
    else if(hora>5){
        printf("valor a pagar de 25.00");
    }
    



    return 0;
}