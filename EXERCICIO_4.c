/*
---------------------------------------------------------------------------------------------
Conversor de temperaturas
As unidades de temperaturas são diversas em muitos contextos e/ou países. No Brasil fazer uso na
unidade o Celsius, porém há as unidades Kelvin e oFarenheit.
Crie um programa que ao receber uma temperatura em oC apresente a mesma nas demais
unidades.
Fórmulas de Conversão:

Celcios para KELVIN:
0ºC + 273.15 = 273.15K

CELCIOS PARA FARENHEIT
Fº = ºC * 1.8 + 32
---------------------------------------------------------------------------------------------
=========================================Jefferson=Bueno=====================================
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //DEFININDO VARIAVEIS
    float celcius, F, kelvin;


    //ENTRADA
    printf("---------------------------------------------------\n");
    printf("             CONVERSOR DE TEMPERATURA\n");
    printf("---------------------------------------------------\n");
    printf("            DIGITE A TEMPERATURA EM CELCIUS:\n");
    scanf("%f", &celcius);
    printf("---------------------------------------------------\n");

    //PROCESSAMENTO
    F = celcius * 1.8 + 32;
    kelvin = celcius + 273.15;

    //SAIDA
    printf("A TEMPERATURA EM CELCIOS EH DE : %.1f C\n", celcius);
    printf("A TEMPERATURA EM FARENHEIT EH DE: %.1f F\n", F);
    printf("A TEMPERATURA EM KELVINS EH DE: %.1f K\n", kelvin);

    //MANTER O CMD ABERTO
    printf("---------------------------------------------------\n");
    system("pause");
    return 0;
}
