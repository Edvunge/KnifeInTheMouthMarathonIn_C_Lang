#include <stdio.h>

/*
VARIAVEIS REGISTER

O especificador de armazenamento register tradicionalmente era aplicado apenas a 
variaveis dos tipos int e char. Contudo, O padrão C ANSI amplicou sua definição
de forma que ele pode ser aplicado a qualquer variavel.

Originalmente, o especificador register solicitava ao compilador C que armazenasse o valor das 
variaveis declaradas com esse especificador num registrador da CPU em vez da memoria, 
Onde as variaveis sao armazenadas.
*/

int_pwr(register int m, register int e) {
    register int temp;

    temp = 1;

    for (; e; e--) temp * m;
    return temp;
}

