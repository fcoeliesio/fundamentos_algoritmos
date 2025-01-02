/*
    Faça um programa que receba três números e mostre-os em ordem crescente
*/

#include <stdio.h>

int main(){
    int array[3];

    printf("Digite o 1° número: ");
    scanf("%d", &array[0]);

    printf("Digite o 2° número: ");
    scanf("%d", &array[1]);

    printf("Digite o 2° número: ");
    scanf("%d", &array[2]);
    
    // Ordenação simples (Bubble Sort)
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2 - i; j++) {
            if (array[j] > array[j + 1]) {
                // Troca os valores
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    printf("Números em ordem crescente: ");
    for (int i = 0; i < 3; i++) {
        printf("%d", array[i]);
    }
    printf("\n");

    return 0;
}