/*

VARIAVEIS GLOBAIS

Ao contrario das variaveis locais, as variaveis globais são reconhecidas pelo programa inteiro e podem ser usadas
por qualquer pedaço de codigo. Além disso, elas guardam seus valores durante toda a execução do programa.
Voce cria variaveis globais declarando-as fora de qualquer função. Elas podem ser acessadas por qualquer, 
expressão independemente de qual bloco de codigo contém a expressão.

*/

#include <stdio.h>

int count; // count e global

void func1(void);
void func2(void);

void main(void) {
    count = 100;
    func1();
}

void func1(void) {
    int temp;

    temp = count;
    func2();
    printf("count e %d", count); // imprimira 100
}

void func2(void) {
    int count;
    for (count=1; count<10; count++)
        putchar('-');
}






