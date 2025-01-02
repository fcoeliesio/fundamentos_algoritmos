/*
    Escrever um algoritmo que leia o nome de um vendedor, o seu salário fixo, 
    e o total de vendas efetuadas por ele no mês (em dinheiro). Sabendo que este 
    vendedor ganha 15% de comissão sobre suas vendas efetuadas, informar o seu 
    nome, o salário fixo e o salário ao final do mês.
*/

#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    char nome[40];
    float salario_fixo, total_vendas, salario_final;

    printf("Vendendor/a - nome: ");
    fgets(nome, 40, stdin);  // Usa fgets para ler o nome completo, incluindo espaços
    nome[strcspn(nome, "\n")] = 0; // Retira o \n capturado ao pressinar Enter na entrada do nome

    printf("Salário fixo (R$): ");
    scanf("%f", &salario_fixo);

    printf("Total de vendas mensais (R$): ");
    scanf("%f", &total_vendas);

    salario_final = salario_fixo + 0.15*total_vendas;

    printf("Nome: %s | Salário fixo: R$ %.2f | Salário final: R$ %.2f\n", nome, salario_fixo, salario_final);
    
    return 0;
}

