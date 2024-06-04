#include <stdio.h>

void increment() {

    int a = 5;
    int b = 5;

    // PREFIX
    int prefix = ++a;
    printf("Prefix Increment: %d\n", prefix);

    // POSTFIX
    int postfix = b++;
    printf("Postfix Increment: %d\n", postfix);
}


int main() {

    increment();

    return (0);
}