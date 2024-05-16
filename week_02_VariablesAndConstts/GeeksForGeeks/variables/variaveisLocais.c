#include <stdio.h>

/*
1. Variaveis Locais Em C

Uma variavel local em C é uma variavel declarada dentro de uma função
ou bloco de código. Seu escopo é limitado ao bloco ou função em que é declarada.
*/

void function() {
    
    int x = 10; // local variable
    printf("%d", x);
}

int main() {

    function();

    return (0);
}