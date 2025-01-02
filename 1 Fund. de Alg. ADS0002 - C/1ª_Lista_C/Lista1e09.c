/*
    Faça um algoritmo que receba o preço de custo de um produto e 
    mostre o valor de venda. Sabe-se que o preço de custo recebera 
    um acréscimo de acordo com um percentual informado pelo usuário.
*/
#include <stdio.h>
#include <math.h>

int main(){
    float preco_custo, percentual_acrescimo, valor_venda;

    printf("Preço do custo do produto (R$): ");
    scanf("%f", &preco_custo);

    printf("Acréscimo em valor percentual [0 - 100]: ");
    scanf("%f", &percentual_acrescimo);

    valor_venda = preco_custo*(1+percentual_acrescimo/100);

    printf("O valor de venda é igual á R$ %.2f.\n", valor_venda);
    return 0;
}