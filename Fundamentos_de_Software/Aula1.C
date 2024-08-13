#include <stdio.h>

// Aspectos técnicos do software

/*
obter notas
calcular media
verificar se o aluno foi reprovado ou não
se a media >= 7 aprovado
se não reprovado
*/

int main(void)
{
    // decraração de variaveis
    float nota1, nota2, nota3, media;

    // obter as notas
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    // calcular a media
    media = (nota1 + nota2) / 2;

    // veriicar se foi aprovado ou não
    if (media >= 7)
        printf("Aprovado");
    else
        printf("Reprovado");

    return 0;

}
