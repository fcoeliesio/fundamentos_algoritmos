/*
    Modifique o programa anterior para imprimir os números inteiros entre $1$ e um valor digitado pelo
    usuário, mas, dessa vez, apenas os ímpares.
*/

#include <stdio.h>

int main(){
    int numero_digitado;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero_digitado);

    for (int i=1; i<=numero_digitado; i++){
        if (i % 2 != 0){
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}