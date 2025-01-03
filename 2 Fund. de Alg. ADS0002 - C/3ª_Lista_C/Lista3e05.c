/*
    Faça um programa para imprimir os números inteiros entre 1 e um valor digitado pelo usuário.
*/

#include <stdio.h>

int main(){
    int numero_digitado;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero_digitado);

    for (int i=1; i<=numero_digitado; i++){
        printf("%d ", i);
    }

    return 0;
}