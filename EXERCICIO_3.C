/*
---------------------------------------------------------------------------------------------
Programa: média ponderada.
Muitos concursos e universidades usam o sistema de média ponderada para a formulação da
média final dos alunos. Assim, objetivo desse programa é a realização desse cálculo de forma
automatizada.
Considere três notas de um aluno - a serem informadas pelo usuário, calcule e escreva a média
final deste aluno.
Considerar que a média é ponderada e que o peso das notas é 2, 3 e 5, respectivamente Fórmula
para o cálculo da média final é:
MEDIA = (N1 * 2 + N2 * 3 + N3 * 5) / 10
---------------------------------------------------------------------------------------------
=========================================Jefferson=Bueno=====================================
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //DEFININDO VARIAVEIS
    float nota1, nota2, nota3, media;


    //ENTRADA
    printf("---------------------------------------------------\n");
    printf("                 MEDIA PONDERADA\n");
    printf("---------------------------------------------------\n");
    printf("            ENTRE COM A PRIMEIRA NOTA:\n");
    scanf("%f", &nota1);
    printf("---------------------------------------------------\n");
    printf("             ENTRE COM A SEGUNDA NOTA:\n");
    scanf("%f", &nota2);
    printf("---------------------------------------------------\n");
    printf("            ENTRE COM A TERCEIRA NOTA:\n");
    scanf("%f", &nota3);
    printf("---------------------------------------------------\n");

    //PROCESSAMENTO
    media = (nota1 * 2 + nota2 * 3 + nota3 * 5) / 10;

    //SAIDA
    printf("a media final do aluno e de: %.1f\n", media);

    //MANTER O CMD ABERTO
    printf("---------------------------------------------------\n");
    system("pause");
    return 0;
}
