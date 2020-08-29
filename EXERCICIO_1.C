/*
---------------------------------------------------------------
Programa: calculador de custos.
Sabe-se que o custo de um carro novo ao consumidor é a soma do custo de fábrica com a
porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Crie um programa
que permita ao usuário informar: valor do custo de fábrica, o % de impostos e o % do distribuidor.
A saída deverá mostrar:
● Valor total do carro;
● Valor do distribuidor e a porcentagem informada;
● Valor dos impostos;
---------------------------------------------------------------
=========================Jefferson=bueno=======================
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //DEFININDO VARIAVEIS
    float fabrica, impostos, distribuidor, total_carro, total_distribuidor, total_impostos;

    //DISPLAY E ENTRADA DE DADOS
    printf("---------------------------------------------------\n");
    printf("              CALCULADOR DE IMPOSTOS\n");
    printf("        DIGITE O VALOR DO CUSTO DE FABRICA:\n");
    scanf("%f", &fabrica);
    printf("---------------------------------------------------\n");
    printf("         DIGITE A PORCENTAGEM DE IMPOSTOS:\n");
    scanf("%f", &impostos);
    printf("---------------------------------------------------\n");
    printf("   DIGITE A PORCENTAGEM DE LUCRO DO DISTRIBUIDOR:\n");
    scanf("%f", &distribuidor);
    printf("---------------------------------------------------\n");

    //PROCESSAMENTO
    total_distribuidor = (fabrica * distribuidor) / 100;
    
    total_impostos = (fabrica * impostos * distribuidor) / 100;
    
    total_carro = total_impostos + fabrica;

    //SAIDAD E DADOS
    printf("O preco final do carro e de: R$%.2f\n", total_carro);
    
    printf("---------------------------------------------------\n");

    printf("O valor do distribuidor sem os impostos e de R$%.2f\n",total_distribuidor);
    printf("A porcentagem imformada foi de: %.2f %%\n", distribuidor);
    
    printf("---------------------------------------------------\n");
    
    printf("o valor dos impostos foi de R$%.2f\n", total_impostos);


    //MANTEM O CMD ABERTO
    printf("---------------------------------------------------\n");
    system("pause");
    return 0;
}
