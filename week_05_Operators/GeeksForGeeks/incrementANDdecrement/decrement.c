#include <stdio.h>

void decrement() {

    int a = 5;
    int b = 5;

    // PREFIX
    int prefix = --a;
    printf("Prefix = %d\n", prefix);

    // POSTFIX
    int postfix = b--;
    printf("Postfix = %d\n", postfix);
}


int main() {

    decrement();

    return (0);
}