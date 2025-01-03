/*
    Faça um programa para resolver equações de 2º grau do tipo 
    ax²+bx+c = 0, em que a, b, c são reais e a é diferente de zero.
*/

#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, delta, raiz_x1, raiz_x2;

    do {
        printf("Digite o valor de a: ");
        scanf("%f", &a);
    } while(a == 0);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    delta = b*b - 4*a*c;

    if (delta < 0){
        printf("A equação não possui raízes reais!\n");
    } else if (delta == 0){
        raiz_x1 = -b/(2*a);
        printf("A equação possui uma única raiz real!\n");
        printf("x1 = %.2f\n", raiz_x1);    
    } else {
        raiz_x1 = (-b + sqrt(delta))/(2*a);
        raiz_x2 = (-b - sqrt(delta))/(2*a);
        printf("x1 = %.2f\nx2 = %.2f\n", raiz_x1, raiz_x2);
    }

    return 0;
}