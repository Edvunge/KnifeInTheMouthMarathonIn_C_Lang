/*
Voce pode inicializar uma variavel local com algum valor conhecido.
Esse valor será atribuido a variavel cada vez que o bloco de codigo em que ela 
é declarada for executado. Por exemplo, o programa seguinte imprime o numero 10 dez vezes:
*/
#include <stdio.h>

void f(void);

void main(void) {
    int i;

    for (i = 0; i < 10; i++) f();
}

void f(void) {
    int j = 10;

    printf("%d ", j);

    j++; // esta linha não tem nenhum efeito
}
