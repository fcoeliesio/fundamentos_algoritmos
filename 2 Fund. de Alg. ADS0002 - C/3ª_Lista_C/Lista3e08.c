/*
    Elabore um programa que calculeSomatório{1,i}Ni, onde N é informado pelo usuário.
    Caso o usuário forneça um valor negativo, o programa deve apresentar a mensagem: 
    “Digite apenas valores maiores ou iguais a zero.”
*/

#include <stdio.h>

int main() {
    int num = 0;

    while (num <= 0) {
        printf("Digite um número maior que zero: ");
        scanf("%d", &num);
    }
    
    int soma = 0;
    for (int i = 1; i <= num; i++) {
        soma += i;
    }
    
    printf("Soma: %d\n", soma);
    
    return 0;
}
