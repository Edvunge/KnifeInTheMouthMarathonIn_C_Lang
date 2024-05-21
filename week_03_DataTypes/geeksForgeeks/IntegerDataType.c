#include <stdio.h>

/*
INTEGER DATA TYPE

O tipo de dados inteiro em C é usado para armazenar numeros inteiros (qualquer número incluindo positivo,
negativo e zero sem parte decimal).
Valores octais, valores hexadecimais e valores decimais podem ser armazenados no tipo de dados int em C.

faixa:  -2.14.483.648  a  2.14.483.647
tamanho: 4 bytes
especificador de formato: %d
*/

int main() {

    int a = 9;

    int b = -9;

    int c = 89U;

    long int d = 99998L;

    printf("Integer value with positive data: %d\n", a);
    printf("Integer value with negative data: %d\n", b);
    printf("Integer value with an unsigned data: %u\n", c);
    printf("Integer value with an long data: %ld\n", d);

    return (0);
}