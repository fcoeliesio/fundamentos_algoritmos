/*
    Faça um programa que receba o código correspondente ao cargo de um 
    funcionário e seu salário atual e mostre o cargo, o valor do aumento 
    e seu novo salário. Os cargos estão na tabela a seguir:
    
    Código  Cargo           Percentual
    1       Escriturário    50
    2       Secretário      35
    3       Caixa           20
    4       Gerente         10
    5       Diretor         Não houve aumento
*/

#include <stdio.h>

struct lista{
    int codigo;
    char cargo[14];
    float percentual;
};
    
int main(){
    struct lista f1 = {1, "Escriturário", 0.50};
    struct lista f2 = {2, "Secretário", 0.35};
    struct lista f3 = {3, "Caixa", 0.20};
    struct lista f4 = {4, "Gerente", 0.10};
    struct lista f5 = {5, "Diretor", 0};

    struct lista funcionarios[5] = {f1, f2, f3, f4, f5};

    int codigo;
    float salario, aumento, novo_salario;

    printf("1 Escriturário | 2 Secretário | 3 Caixa | 4 Gerente | 5 Diretor\n");
    do {
        printf("Digite o código do cargo: ");
        scanf("%d", &codigo);
    } while (codigo < 1 || codigo > 5);

    printf("Digite o salário atual: ");
    scanf("%f", &salario);

    struct lista funcionario = funcionarios[codigo - 1]; // Encontra o cargo correspondente

    aumento = salario*funcionario.percentual;
    novo_salario = salario*(1+funcionario.percentual);

    printf("Cargo: %s\n", funcionario.cargo);
    printf("Aumento: R$ %.2f\n", aumento);
    printf("Novo salário: R$ %.2f\n", novo_salario);

    return 0;
}