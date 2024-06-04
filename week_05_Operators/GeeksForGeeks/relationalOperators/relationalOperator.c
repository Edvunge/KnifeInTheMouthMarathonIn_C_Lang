#include <stdio.h>

int main(void) {

    int a = 10, b = 4; 

    // greater than example
    if (a > b)
        printf("a is greater than b\n");
    else 
        printf("a is less than or equal to b\n");


    // greater than equal to
    if (a >= b)
        printf("a is greater than or equal to b\n");
    else 
        printf("a is lesser than b\n");


    // less than example
    if (a < b)
        printf("a is less than b\n");
    else 
        printf("a is greater than or equal to b\n");


    // lesser than equal to
    if (a <= b)
        printf("a is less than or equal to b\n");
    else 
        printf("a is greater than b\n");


    // equal to
    if (a == b)
        printf("a is less than or equal to b\n");
    else 
        printf("a is less than or equal to b\n");


    // not equal to 
    if (a != b) 
        printf("a is not equal to b\n");
    else 
        printf("a is equal b\n");

    return (0);
}