/*
    Escreva um programa que exiba uma lista de opções (menu): Adição, subtração, 
    divisão e multiplicação e sair. Imprima o resultado da operação escolhida entre 
    dois números informados pelo usuário. Repita até que a opção sair seja escolhida.
*/

#include <stdio.h>

int main(){
    float numero_1, numero_2, resultado;
    int operacao;
    char *divisao_zero;

    printf(".:: 1 Adição | 2 Subtração | 3 Divisão | 4 Multiplicação | 5 Sair ::.\n");
    printf("DIGITE DOIS NÚMEROS\n");
    
    printf("Primeiro número: ");
    scanf("%f", &numero_1);

    printf("Segundo número: ");
    scanf("%f", &numero_2);

    do {
        printf("Selecione uma operação [1-5]: ");
        scanf("%d", &operacao);  
    } while (operacao < 1 || operacao > 5);
    

    while (operacao != 5){
        if (operacao == 1 ){
            resultado = numero_1+numero_2;
        } else if (operacao == 2 ){
            resultado = numero_1-numero_2;
        } else if (operacao == 3){
            if (numero_2 != 0){
                resultado = numero_1/numero_2;
            } else {
                divisao_zero = "Não existe divisão por zero!\n";
            }
        } else if (operacao == 4){
            resultado = numero_1*numero_2; 
        }

        if (numero_2 == 0 && operacao == 3){
            printf("%s\n", divisao_zero);
        } else {
            printf("Resultado: %f.2f\n", resultado);
        }
        
        do {
            printf("Selecione uma operação [1-5]: ");
            scanf("%d", &operacao);  
        } while (operacao < 1 || operacao > 5);
    }

    return 0;
}