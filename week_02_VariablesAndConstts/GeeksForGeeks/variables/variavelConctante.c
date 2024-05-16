#include <stdio.h>


/*
Variavel Constante Em C

Até agora vimos apenas as variaveis cujos valores podem ser modificados inumeras vezes.
Mas a linguagem C também nos fornece uma maneira de tornar imutavel o valor de uma variavel.
Podemos fazer isso definindo a variavel como constante.
*/

int main() {

    // variable
    int not_constant;

    // constant variable;
    const int constant = 20;

    not_constant = 40;
   // constant = 22;

    return (0);
}