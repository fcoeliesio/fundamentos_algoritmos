/*
    Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. 
    A formula de conversão e: F=9/5C+32, sendo F temperatura em Fahrenheit e C temperatura em Celsius
*/

#include <stdio.h>
int main(){
    float temp_grau_c, temp_grau_f;

    printf("Temperatura (ºC): ");
    scanf("%f", &temp_grau_c);
    
    while(temp_grau_c < -273.15){
        printf("Forneça uma temperatura igual ou superior a -273,15 °C: ");
        scanf("%f", &temp_grau_c);
    }

    temp_grau_f = (9/5)*temp_grau_c+32;

    printf("Resultado: %.2f °C é equivalente a %.2f °F.\n", temp_grau_c, temp_grau_f);
    return 0;
}