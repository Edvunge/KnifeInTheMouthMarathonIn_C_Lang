#include <stdio.h>

/*
TIPO DE DADOS DUOBLE

Um tipo de dados double em C é usado para armazenar números decimais (números com valores de ponto flutuante)
com precisao dupla.
É usado para definir valores númericos que contém núros com valores decimais em C.

Faixa: 1.7E-308 a 1.7E+308
Tamanho: 8bytes
Especificador de formato: %lf
*/

int main(void) {
    double a = 123123123.00;
    double b = 12.293123;
    double c = 2312312312312.123123;

    printf("%lf\f", a);
    printf("%lf\f", b);
    printf("%lf\f", c);

    return (0);
}