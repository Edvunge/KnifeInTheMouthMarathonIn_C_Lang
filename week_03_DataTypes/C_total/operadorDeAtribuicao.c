#include <stdio.h>

int x;
char ch;
float f;

void func(void) {

    ch = x; // linha 1 
    x = f;  // linha 2
    f = ch; // linha 3
    f = x;  // linha 4
}