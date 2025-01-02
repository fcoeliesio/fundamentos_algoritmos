/*
Faça um algoritmo que receba dois números e exiba o resultado da sua soma.
*/

#include <stdio.h>
#include <math.h>

int main(){
    double numero1, numero2, soma;

    printf("Digite o primeiro número: ");
    scanf("%lf", &numero1);

    printf("Digite o segundo número: ");
    scanf("%lf", &numero2);

    soma = numero1 + numero2;
    
    printf("Soma: %.2lf\n", soma);
    
    return 0;
}