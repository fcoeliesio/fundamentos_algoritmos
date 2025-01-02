/*
    Escrever um algoritmo que leia o nome de um aluno e as notas das três 
    provas que ele obteve no semestre. No final informar o nome do aluno e 
    a sua média (aritmética)
*/

#include <stdio.h>
#include <string.h>

int main(){
    char nome[40];
    float nota1, nota2, nota3, media;

    printf("Estudante - nome: ");
    fgets(nome, 40, stdin);
    nome[strcspn(nome, "\n")] = 0; 

    printf("Digite a 1ª nota: ");
    scanf("%f", &nota1);

    printf("Digite a 2ª nota: ");
    scanf("%f", &nota2);

    printf("Digite a 3ª nota: ");
    scanf("%f", &nota3);

    media = (nota1+nota2+nota3)/3;
    
    printf("Estundante: %s | Média: %.1f\n", nome, media);

    return 0;
}