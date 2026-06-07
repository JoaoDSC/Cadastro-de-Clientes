#include<stdio.h>

int main(){
    char nome[3][50];
    int idade[3],i;
    float saldo[3];

printf("-----CADASTRO DE CLIENTES-----");

    for(i=0;i<=2;i++){

        printf("\nInforme seu Nome\n");
        scanf(" %s", nome[i]);

        printf("Informe sua Idade\n");
        scanf("%d", &idade[i]);

        printf("Informe seu saldo\n");
        scanf(" %f", &saldo[i]);
    }

    for(i=0;i<=2;i++){
        printf(" %d-%s ",i+1,nome[i]);
        printf("Idade=%d ",idade[i]);
        printf("Saldo=%.2f\n",saldo[i]);
    }
    return 0; 
}