#include<stdio.h>

int main(){
    int op,valor,quantidade,valor_total,desconto, total_com_desconto;
    printf("1-inteira\n");
    printf("2-meia-entrada\n");
    printf("3-entrada promocional\n");
    printf("digite a sua esolha:\n");
    scanf("%d", &op);
    printf("quantidade de engressos:\n");
    scanf("%d", &quantidade);

    switch(op){
        case 1:
            valor =30;
            break;
        case 2:
            valor= 15;
            break;
        case 3:
            valor=20;
            break;
        default:
            printf("error");
            break;
    }
    valor_total=valor*quantidade;
    desconto=(valor_total*5)/100;
    total_com_desconto=valor_total-desconto;

    if (op==1){
        if(valor_total>=100){
            printf("total a pagar com desconto igual a %d", total_com_desconto);
        }
        else{
            printf("total a pagar igual a %d", valor_total);
        }
        
    }
    else if(op==2){
        if (valor_total>=100){
            printf("total a pagar com desconto igual a %d", total_com_desconto);
        }
        else
        {
            printf("total a pagar igual a %d", valor_total);
        }
        
    }
    else if(op ==3){
        if(valor_total>=100){
            printf("total a pagar com desconto igual a %d", total_com_desconto);
        }
        else
        {
             printf("total a pagar igual a %d", valor_total); 
        }
        
    }


    return 0;
}