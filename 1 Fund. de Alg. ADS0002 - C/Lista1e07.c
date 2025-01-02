/*
    Elaborar um algoritmo que efetue a apresentação do valor da conversão em 
    real (R$) de um valor lido em dolar (US$). O algoritmo deverá solicitar o 
    valor da cotação do dólar e também a quantidade de dólares disponíveis com o usuário.

mensagem = f''
print(mensagem)
*/

#include <stdio.h>

int main(){
    float cotacao_dolar, valor_em_dolares, valor_convertido_real;

    printf("Cotação do dolar (R$): ");
    scanf("%f", &cotacao_dolar);

    printf("Valor em dolares disponível: ");
    scanf("%f", &valor_em_dolares);

    valor_convertido_real = valor_em_dolares*cotacao_dolar;

    printf("O valor convertido em real é igual R$ %.2f.\n", valor_convertido_real);

    return 0;
}