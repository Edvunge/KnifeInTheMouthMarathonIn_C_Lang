#include <stdio.h>

/*
CONSTANTES

Em C, constantes referem-se a valores fixos que o programa não pode alterar.
constantes em C, podem ser de qualquer um dos cinco tipos de dados basicos.
*/

/*
    Tipo de dado                        Exemplos de constantes
    int                                 1 123               210000            -234
    long int                            35000L              -34L
    short int                           10                  -12                90
    unsigned int                        10000U              987U               40000
    float                               123.23F             4.34e-3F
    double                              123.23              12312333           -0.9876324
    long double                         10011.2L
*/






/*

CONSTANTES HEXADECIMAIS E OCTAIS

As vezes é mais facil usar um sistema numerico na base 8 ou 16 em lugar de 10 (nosso sistema decimal padrão)
O sistema numerico na base 8 é chamado de OCTAL e utiliza os digitos de 0 a 7. Em Octal, numero 10 é o mesmo
que 8 em decimal. 16 de hexadecimal.

*/


int hex = 0x80;      // 128 em decimal
int oct = 012;       // 10 em decimal


/*
CONSTANTES STRING


C suporta outro tipo de constante: a string. Uma string é um conjunto de caracteres colocado entre aspas duplas
Por Exemplo, "isso e um teste" é uma string.
*/



/*
CONTANTES CARACTERE DE BARRA INVERTIDA


Colocar entre aspas simples todas as constantes tipo caractere funciona para a maioria dos caracteres imprimiveis.
Uns poucos, porém, como o retorno de carro (CR), são impossiveis de inserir pelo teclado. 
Por essa razão, C criou as constantes especiais de caractere de barra invertida.

CODIGOS DE BARRA INVERTIDA

Codigo                          Significado
-----------------------------------------------------------------------------------------
\b                              Retrocesso (BS)
\f                              Alimentacao de formulario (FF)
\n                              Nova linha (LF)
\r                              Retorno de Carro (CR)
\t                              Tabulacao horizontal(HT)
\"                              Aspas Duplas
\'                              Aspas Simples
\0                              Nulo
\\                              Barra Invertida
\v                              Tabulacao Vertical
\a                              Alerta (beep)
\N                              Constante Octal (onde N é uma constante octal)
\xN                             Constante hexadecimal (onde N e uma constante hexadecimal)

*/


void main(void) {

    printf("\n\tIsso e um teste");
    
    return (0);
}



