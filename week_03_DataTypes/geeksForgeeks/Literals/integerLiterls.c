#include <stdio.h>

/*
Integer Literals are used to represent and store the integer values only, 
Integer literals are expressed int two types 

0x10 = 16

a) Decimal-Literal(base 10): (0, 1, 2, 3, 4, 5, 6, 7, 8, 9)

b) Octal-Literal (base 8): (0, 1, 2, 3, 4, 5, 6, 7)
    exemple: 045, 076, 06210

c) Hexa-Literal(base 16): (0, 1, 2, 3, 4, 5, 6, 7, 8, 9, a, A, b, B, c, C, d, D, e, E, f, F)
    exemple: 0x23A, 0xb4C, 0xFEA

d) Binary-Literal(base 2): (0, 1) 0b or 0B
    exemple: 0b101, 0B111

*/

int main() {
    const int intVal = 10;

    printf("Integer Literal: %d \n", intVal);
    return (0);
}