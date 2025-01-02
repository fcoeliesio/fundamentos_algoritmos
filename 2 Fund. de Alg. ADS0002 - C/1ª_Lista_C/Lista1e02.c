/*
    Faça um algoritmo que receba dois números e ao final mostre a 
    soma subtração, multiplicação e a divisão dos números lidos.
*/
#include <stdio.h>
#include <math.h>

int main(){
    double numero1, numero2, soma, subtracao, multiplicacao, divisao;

    printf("Digite o primeiro número: ");
    scanf("%lf", &numero1);
    
    printf("Digite o segundo número: ");
    scanf("%lf", &numero2);

    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1*numero2;
    divisao = (numero2 != 0) ? numero1/numero2: 0;

    printf("Soma: %.2lf\n", soma);
    printf("Sobtração: %.2lf\n", subtracao);
    printf("Multiplicação: %.2lf\n", multiplicacao);
    if (numero2 == 0){
        printf("Não é possível dividir por zero.\n");
    } else{
        printf("Divisão: %.2lf\n", divisao);
    }
    
    return 0;
}