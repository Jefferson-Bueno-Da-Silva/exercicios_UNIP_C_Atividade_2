/*
---------------------------------------------------------------------------------------------
Crie um programa que ao receber do usuário um valor inteiro, correspondente a quantidade de
anos, calcule a equivalência deste em:
● meses
● dias
● horas
● minutos
---------------------------------------------------------------------------------------------
=========================================Jefferson=Bueno=====================================
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //DEFININDO VARIAVEIS
    int anos, meses, dias, horas, minutos;


    //ENTRADA
    printf("---------------------------------------------------\n");
    printf("                 CONVERSOR DE ANOS\n");
    printf("---------------------------------------------------\n");
    printf("            DIGITE UM VALOR INTEIRO EM ANOS:\n");
    scanf("%d", &anos);
    printf("---------------------------------------------------\n");

    //PROCESSAMENTO
    meses = anos * 12;
    dias = anos * 365;
    horas = anos * (365 * 24);
    minutos = anos * ((60 * 24) * 365);

    //SAIDA
    printf("%d anos em meses eh igual a: %d meses\n", anos, meses);
    printf("%d anos em dias eh igual a: %d dias\n", anos, dias);
    printf("%d anos em horas eh igual a: %d horas\n", anos, horas);
    printf("%d anos em minutos eh igual a: %d minutos\n", anos, minutos);

    //MANTER O CMD ABERTO
    printf("---------------------------------------------------\n");
    system("pause");
    return 0;
}
