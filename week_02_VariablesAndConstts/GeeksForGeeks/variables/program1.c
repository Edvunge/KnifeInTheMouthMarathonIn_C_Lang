#include "meuArquivo.h"
#include <stdio.h>

void printValue(){
    printf("variavel global: %d", x);
}

int main() {
    printValue();
    return (0);
}