#include <stdio.h>

/*
3. Variaveis Estaticas Em C

Uma variavel estática em C é uma variavel definida usando a palavra-chave static.
Pode ser definido apenas uma vez em um programa C e seu escopo depende da região onde é declarada 
(pode ser global ou local).

O valor padrão das variaveis estaticas é zero.
*/

void function() {

    int x = 20; // local variable
    static int y = 30; // static variable
    x = x + 10;
    y = y + 10;
    printf("\tLocal: %d\n\tStatic: %d\n",x ,y);
}


int main() {

    printf("First Call\n");
    function();
    
    printf("Second Call\n");
    function();

    printf("Third Call\n");
    function();

    return (0);
}


