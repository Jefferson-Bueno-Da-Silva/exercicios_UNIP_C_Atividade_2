/*
---------------------------------------------------------------------------------------------
Conversor de Moedas
As moedas mais robustas do sistema financeiro global são o Dollar e o Euro, porém sabe-se que há
flutuações nessas moedas em relação à cotação, principalmente quanto ao Real.
Crie um programa para ajudar os viajantes a realizar a conversão para ambas as moedas. O
usuário deverá informar o valor em real que deseja ser convertido e o valor da cotação do dollar e o
euro em relação ao real. Para efeito exemplificação, 1 dollar = R$ 5,57 e 1 euro = R$ 6,58.
Obs. esses valores da cotação devem ser informados pelo usuário!
Ao final, mostre o equivalente do valor informado em Euros e Dollar.
---------------------------------------------------------------------------------------------
=========================================Jefferson=Bueno=====================================
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //DEFININDO VARIAVEIS
    float real, dollar, euro;


    //ENTRADA
    printf("---------------------------------------------------\n");
    printf("             CONVERSOR DE TEMPERATURA\n");
    printf("---------------------------------------------------\n");
    printf("            DIGITE O VALOR A SER CONVERTIDO:\n");
    scanf("%f", &real);
    printf("---------------------------------------------------\n");
    printf("                DIGITE O DO DOLLAR:\n");
    scanf("%f", &dollar);
    printf("---------------------------------------------------\n");
    printf("                 DIGITE O DO EURO:\n");
    scanf("%f", &euro);
    printf("---------------------------------------------------\n");

    //PROCESSAMENTO
    dollar = real / dollar;
    euro = real / euro;

    //SAIDA
    printf("O VALOR EM REAIS: R$%.2f\n",real);
    printf("CONVERTIDO PARA DOLLAR: US$%.2f\n",dollar);
    printf("CONVERTIDO PARA EURO: E$%.2f\n",euro);

    //MANTER O CMD ABERTO
    printf("---------------------------------------------------\n");
    system("pause");
    return 0;
}
