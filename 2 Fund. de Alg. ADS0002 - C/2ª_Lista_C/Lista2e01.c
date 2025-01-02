/*
    Faça um programa que receba três notas de um aluno, calcule e mostre a média aritmética e a mensagem 
    que segue a tabela abaixo. Para alunos de exame, calcule e mostre a nota que devera ser tirada no exame 
    para aprová-lo, considerando que a média no exame e 6,0.

    MÉDIA ARTIMÉTICA : MENSAGEM
        média < 3 : Reprovado
        2 >= média < 7 : Exame
        média >= 7 : Aprovado
*/
#include <stdio.h>
#include <math.h>

float nota(int i) {
    float nota;
    do {
        printf("Digite a %dª nota [0-10]: ", i + 1);
        scanf("%f", &nota);
    } while (nota < 0 || nota > 10);
    return nota;
}

int main() {
    float notas[3], media;
    char mensagem[100];

    // Leitura das 3 notas
    for (int i = 0; i < 3; i++) {
        notas[i] = nota(i);
    }

    // Cálculo da média
    media = (notas[0] + notas[1] + notas[2]) / 3;

    // Determinação da mensagem
    if (media >= 3 && media < 7) {
        float exame = 12 - media;
        printf("Necessário nota igual ou maior que %.1f no Exame Final para aprovação.\n", exame);
    } else {
        if (media >= 7) {
            printf("Aprovado com média %.1f.\n", media);
        } else {
            printf("Reprovado com média %.1f.\n", media);
        }
    }
    return 0;
}