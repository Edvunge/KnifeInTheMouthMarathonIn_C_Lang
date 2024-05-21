#include <stdio.h>

/*

Tipo de Dados Caractere

O tipo de dados de caractere permite que sua variavel armazene apenas um unico caractere.
O tamanho do caractere é 1 byte. É o tipo de dados mais básico em C, ele armazena um unico caractere e 
requer um unico byte de memoria em quase todos os compiladores.

Faixa: (-128 a 127) ou (0 a 255)
Tamanho: 1 byte
Especificador de formato: %c
*/

int main() {
    
    char a = 'a';
    char c;

    printf("Value of a after increment is: %c\n", a);

    a++;
    printf("Value of a after increment is: %c\n", a);

    c = 99;

    printf("Value of c: %c", c);
        
    return (0);
}