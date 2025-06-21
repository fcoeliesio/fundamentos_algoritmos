/*
    Faça um programa que receba dois números e mostre o maior.
*/

#include <stdio.h>

int main(){
    float primeiro_numero, segundo_numero, maior_numero;
    
    printf("Digite o primeiro número: ");
    scanf("%f", &primeiro_numero);
    segundo_numero = primeiro_numero;

    while (primeiro_numero == segundo_numero){
        printf("Digite o segundo número: ");
        scanf("%f", &segundo_numero);
    }

    maior_numero = (primeiro_numero > segundo_numero) ? primeiro_numero: segundo_numero;
    
    printf("Maior(%.1f , %.1f) = %.1f\n", primeiro_numero, segundo_numero, maior_numero);
    return 0;
}