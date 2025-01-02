/*
    Ler dois valores A e B, e efetuar a troca dos valores de forma 
    que a variável A passe a possuir o valor da variável B, e a variável 
    B passe a possuir o valor da variável A. Apresentar os valores trocados
*/

#include <stdio.h>

int main(){
    int valor_A, valor_B;
    int valor_de_troca;

    valor_A = 10;
    valor_B = 20;
    
    printf("a = %d | b = %d\n", valor_A, valor_A);
    
    valor_de_troca = valor_A;
    valor_A = valor_B;
    valor_B = valor_de_troca;

    printf("a = %d | b = %d\n", valor_A, valor_A);
    return 0;
}