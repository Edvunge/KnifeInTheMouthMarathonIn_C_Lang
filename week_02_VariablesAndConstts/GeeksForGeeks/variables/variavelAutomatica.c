#include <stdio.h>

/*

4. Variavel Automatica Em C

Todas as variaveis locais são variaveis automaticas por padrão.
Elas também são conhecidas como variaveis automaticas.

Seu escopo é local e sua vida útil vai até o final do bloco.
Se precisarmos, podemos usar a palavra-chave auto para definir as variaveis automáticas.

O valor padrão das variaveis automaticas é um valor lixo.
*/

void function() {
    
    int x = 10; // local variable
    auto int y = 20; // automatic variable
    printf("auto variables: %d", y);
}



int main() {
    function();
    return (0);
}


