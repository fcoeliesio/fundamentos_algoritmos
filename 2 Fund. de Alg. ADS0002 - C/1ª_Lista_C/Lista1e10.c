/*
    A XPTO está vendendo seus produtos em 5 (cinco) prestações sem juros. 
    Faça um algoritmo que receba um valor de uma compra e mostre o valor das prestações
*/
#include <stdio.h>

int main(){
    float valor_produto, prestacao;

    printf("Informe o valor do Produto: ");
    scanf("%f", &valor_produto);

    prestacao = valor_produto/5;

    printf("O valor da prestação é de R$ %.2f em cinco vezes sem juros.\n", prestacao);
    return 0;
}