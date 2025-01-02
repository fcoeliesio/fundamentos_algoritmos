/*
    Faça um programa que receba o dia o mês e o ano e mostre nos seguintes 
    formatos: dia/mês/ano -> mês por extenso. (ex: 19/03/2020 -> 19 de março de 2020).
*/
#include <stdio.h>

int ano_bissexto(int ano){
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}

int main(){
    int dia, mes, ano;
    int meses[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char *nomes_mes[] = {"janeiro", "fevereiro", "março", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};

    // Dia
    do {
        printf("Digite o dia em formato numérico: ");
        scanf("%d", &dia);
    } while (dia < 1 || dia > 31);

    // Mês
    do {
        printf("Digite o mês em formato numérico: ");
        scanf("%d", &mes);
    } while (mes < 1 || mes > 12);

    // Ano
    do {
        printf("Digite o ano em formato numérico: ");
        scanf("%d", &ano);
    } while (ano <= 0);

    if (ano_bissexto(ano)) {
        meses[1] = 29;  // Fevereiro tem 29 dias em anos bissextos
    }

    if (dia > meses[mes - 1]) {
        printf("Data inválida!\n");
    } else {
        printf("Data: %02d de %s de %04d.\n", dia, nomes_mes[mes - 1], ano);
        printf("Data formatada: %02d/%02d/%04d.\n", dia, mes, ano);
    }
    return 0;
}
