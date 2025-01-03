/*
    Faça um programa para escrever a contagem regressiva do lançamento de um foguete. O programa
    deve imprimir 10, 9, 8, ..., 1, 0 e Fogo!!! Na tela
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>  // Para a função sleep

int main() {
    for (int i = 0; i < 10; i++) {
        printf("%d, ", abs(i - 10));
        fflush(stdout);  // Para garantir que a saída seja mostrada imediatamente
        sleep(1);  // Pausa de 1 segundo
    }
    printf("O e Fogo!!!\n");

    return 0;
}
