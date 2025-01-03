/*
    Dados três valores X, Y e Z, verificar se eles podem ser os comprimentos dos 
    lados de um triângulo e, se forem, verificar se o um triângulo equilátero, isósceles 
    ou escaleno. Se eles não formarem um triângulo escrever uma mensagem. Considerar que:

*   o comprimento de cada lado de um triângulo é menor que a soma dos outros dois lados:
*   chama-se triângulo equilátero o triângulo que tem três lados iguais;
*   chama-se triângulo isósceles o triângulo que tem o comprimento de dois lados iguais;
*   chama-se triângulo escaleno o triângulo que tem os três lados diferentes.
*/
#include <stdio.h>

int main() {
    float lado_x, lado_y, lado_z;
    char existe_triangulo; // 's' ou 'n'
    char* tipo_triangulo;

    do {
        printf("Digite o valor do lado X: ");
        scanf("%f", &lado_x);
    } while (lado_x <= 0);

    do {
        printf("Digite o valor do lado Y: ");
        scanf("%f", &lado_y);
    } while (lado_y <= 0);

    do {
        printf("Digite o valor do lado Z: ");
        scanf("%f", &lado_z);
    } while (lado_z <= 0);

    if (lado_x < (lado_y + lado_z) && lado_y < (lado_x + lado_z) && lado_z < (lado_x + lado_y)) {
        existe_triangulo = 's';

        // Determinar o tipo de triângulo
        if (lado_x == lado_y && lado_y == lado_z) {
            tipo_triangulo = "equilátero";
        } else if (lado_x != lado_y && lado_y != lado_z && lado_x != lado_z) {
            tipo_triangulo = "escaleno";
        } else {
            tipo_triangulo = "isósceles";
        }

        printf("Existe um triângulo %s com essas medidas.\n", tipo_triangulo);
    } else {
        printf("Não existe triângulo com medidas %.1f, %.1f e %.1f\n", lado_x, lado_y, lado_z);
    }

    return 0;
}