/*
    Faça um programa que receba o salário de um funcionário, calcule e mostre 
    o novo salário desse funcionário, acrescido de bonificação e de auxílio-escola

    Salário             Bonificação
    Até 500                 5%
    Entre 500 e 1200        12%
    Acima de 1200           0%

    Salário             Auxílio Escola
    Até 600                 150
    Mais de 600             100
*/

#include <stdio.h>

int main(){
    float salario, bonificacao, auxilio, salario_total;
    
    do {
        printf("Salário do funcionário (R$): ");
        scanf("%f", &salario);
    } while (salario < 0);

    if (salario > 1200){
        bonificacao = 0;
    } else {
        bonificacao = (salario <= 500) ? 0.05*salario: 0.12*salario;
    }

    auxilio = (salario <= 600) ? 150 : 100;

    salario_total = salario + bonificacao + auxilio;
    
    printf("Bonificação (R$): %.2f\n", bonificacao);
    printf("Auxílio Escola (R$): %.2f\n", auxilio);
    printf("Salário Total (R$): %.2f\n", salario_total);
    
    return 0;
}
