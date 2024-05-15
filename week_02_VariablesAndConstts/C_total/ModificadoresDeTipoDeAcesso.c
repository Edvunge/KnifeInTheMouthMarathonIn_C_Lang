#include <stdio.h>
/*
MODIFICADORES DE TIPO DE ACESSO

o C introduziu dois novos modificadores (tambem chamados quantificadores) que controlam a maneira como as variaveis
podem ser acessadas ou modificadas.

Esses modificadores são const e volatile. 
Devem preceder os modificadores de tipos e os nomes que eles modificam.  
*/

/*
CONST

variaveis do tipo const não podem ser modificadas por seu programa. (Uma variavel const pode, 
enquanto, receber um valor inicial) O compilador pode colocar variaveis desse tipo em memoria de apenas
leitura (ROM) Por Exemplo:  */

const int nota = 10;

/*
Cria uma variavel inteira chamada a, com um valor inicial 10, que seu programa não pode modificar.
Voce pode, porém, usar a variavel a em outros tipos de expressões. Uma variavel const recebe seu valor
de uma inicialização explicita ou por algum recurso dependente do hardware.
*/


void sp_to_dash(const char *str);

void main(void) {
    sp_to_dash("isso e um teste");
}

void sp_to_dash(const char *str) {
    while(*str) {
        if (*str == ' ') printf("%c", '-');
        else printf("%c", *str);
        str++;
    }
}


/*

Volatile

O modificador volatile é usado para informar ao compilador que o valor de uma variavel pode ser alterado
de maneira não explicitamente especificada pelo programa. Por Exemplo, um endereço de uma variavel global pode 
ser passado para a rotina de relogio do sistema operacional e usado para guardar o tempo real do sistema.
*/

const volatile unsigned char *port = 0x30;







