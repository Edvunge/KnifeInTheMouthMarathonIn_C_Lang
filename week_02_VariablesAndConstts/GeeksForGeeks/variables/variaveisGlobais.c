#include <stdio.h>

/*
2. Variaveis Globais Em C

Uma variavel global em C é uma variavel declarada fora da função ou de um bloco de codigo. 
Seu escopo é todo o programa, ou seja, podemos acessar a variavel Global em qualquer lugar do programa 
C apos ela ser declarada.
*/

int x = 20;

void function1() {
    printf("Function1: %d\n", x);
}

void function2() {
    printf("Function2: %d\n", x);
}


int main() {

    function1();
    function2();
    return (0);
}