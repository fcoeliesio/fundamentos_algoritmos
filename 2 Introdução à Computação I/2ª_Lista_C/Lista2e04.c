/*
    Faça um programa que receba três números obrigatoriamente em ordem
    crescente e um quarto número que não siga esta regra. Mostre, em 
    seguida, os quatro números em ordem decrescente.
*/

#include <stdio.h>

float receber_numero(int i, float numeros[]){
    float numero;
    
    printf("Digite o %d° número: ", i+1);
    scanf("%f", &numero);

    if (i == 0) {
        numeros[i] = numero;
        return numero;
    }

    while (numero <= numeros[i-1]){
        printf("Digite um número maior que %.2f: ", numeros[i-1]);
        scanf("%f", &numero);
    }
    numeros[i] = numero;
    return numero;
}

void ordenacao_decrescente(float numeros[], int tamanho) {
    // Ordenação usando o algoritmo de Bubble Sort
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (numeros[i] < numeros[j]) {  // Troca se o número da esquerda for menor
                float temp = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = temp;
            }
        }
    }
}

int main(){
    float numeros[4];

    for (int i = 0; i < 3; i++){
        receber_numero(i, numeros);
    }

    printf("Digite o 4° número: ");
    scanf("%f", &numeros[3]);

    ordenacao_decrescente(numeros, 4);

    printf("Números inseridos: ");
    for (int i = 0; i < 4; i++) {
        printf("%.1f ", numeros[i]);
    }
    printf("\n");

    return 0;
}