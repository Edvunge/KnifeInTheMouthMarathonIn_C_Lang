#include <stdio.h>

/*
6. Registre Variaveis Em C

variaveis de registro em C são aquelas variaveis que são armazenadas no registro da CPU em vez do local
de armazenamento convencional como RAM. Seu escopo é local e existe até o final do bloco ou função.

Essas variaveis são declaradas usando a palvra-chave Register.
*/

int main() {
    
    register int var = 22;

    printf("value of register variable: %d\n", var);

    return (0);
}