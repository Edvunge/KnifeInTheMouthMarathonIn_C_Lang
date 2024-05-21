#include <stdio.h>

/*
TIPO DE DADOS FLUTUANTE

Na programação C, o tipo de dados float é usado para armazenar valores de ponto flutuante.
Float em C é usado para armazenar valores decimais e exponenciais. 
É usado para armazenar numeros decimais (numeros com valores de ponto flutuante) com precisão unica.

Faixa: 1.2E-38 a 3.4E+38
Tamanho: 4 bytes
Especificador de formato: %f
*/

int main() {

    float a = 9.0f;
    float b = 2.5f;

    float c = 2E-4f;
    printf("%f\n", a);
    printf("%f\n", b);
    printf("%f", c);

    return (0);
}