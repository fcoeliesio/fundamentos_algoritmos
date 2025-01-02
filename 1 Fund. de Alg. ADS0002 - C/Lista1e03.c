/*
Escrever um algoritmo para determinar o consumo médio de um automóvel 
sendo fornecida a distância total percorrida pelo automóvel e o total 
gasto de combustível.

consumo  = float(input(''))/float(input(''))

print(f'')
*/

#include <stdio.h>
#include <math.h>

int main(){
    float distancia, consumo, consumo_medio;
    printf("Informe a distância percorrida (km): ");
    scanf("%f", &distancia);

    printf("Informe o consumo de combustível (L): ");
    scanf("%f", &consumo);

    consumo_medio = (consumo != 0) ? distancia/consumo: 0;

    printf("O consumo médio do automóvel corresponte a %.1f km/L.\n", consumo_medio);

    return 0;
}
