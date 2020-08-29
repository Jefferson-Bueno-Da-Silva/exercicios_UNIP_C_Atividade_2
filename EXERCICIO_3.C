/*
---------------------------------------------------------------------------------------------
Explique o que é uma variável, como deve ser declarada e atribuído valores a mesma, bem
como sua relação com a memória do computador.
RESPOSTA:
Uma variavel é um espaco na memoria onde o computador pode guardar valores ou caracteres
Uma variavel em C deve ser declarada informando seu tipo, por exemplo:
Uma variavel de Valor real 2.564846... deve ser declarada como tipo float
Uma variavel do tipo inteiro e declarada como int e etc...
Quando declaramos uma variavel reservamos um espaço na memoria fisica do computrador
e nesse espaço reservado podemos guardar uma certa quantidade de informação, seja ela numeros 
ou letras, frases e etc...
Atribuir um valor a uma variavel pode ser feito de dois jeitos, via código onte o programador
insere o valor desta variavel diretamente ao código, ou deixar que o usuario atribua o valor
da variavel para fins diversos.
Quando atribuimos valor a uma variavel via código, podemos fazer de dois jeitos diferentes,
inserindo o valor da mesma no momento da sua declaração exemplo: float numero_real = 3.14;
ou em qualquer momento do código depois de ser declarada
---------------------------------------------------------------------------------------------
=========================================Jefferson=Bueno=====================================
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Uma variavel eh um espaco na memoria onde o computador pode guardar\nvalores ou caracteres\n");
    printf("Uma variavel em C deve ser declarada informando seu tipo, por exemplo:\n");
    printf("Uma variavel de Valor real 2.564846... deve ser declarada como tipo float\n");
    printf("Uma variavel do tipo inteiro e declarada como int e etc...\n");
    printf("Quando declaramos uma variavel reservamos um espaco na memoria fisica do computrador\n");
    printf("e nesse espaco reservado podemos guardar uma certa quantidade de informacao, seja ela numeros ou letras, frases e etc...\n");
    printf("Atribuir um valor a uma variavel pode ser feito de dois jeitos, via codigo onte o programador\n");
    printf("insere o valor desta variavel diretamente ao codigo, ou deixar que o usuario atribua o valor\n");
    printf("da variavel para fins diversos.\n");
    printf("Quando atribuimos valor a uma variavel via codigo, podemos fazer de dois jeitos diferentes,\n");
    printf("inserindo o valor da mesma no momento da sua declaracao exemplo:\nfloat numero_real = 3.14;\n");
    printf("ou em qualquer momento do codigo depois de ser declarada\n");


    system("pause");
    return 0;
}
