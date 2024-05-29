#include <stdio.h>

int main() {

    int x;

    scanf("Enter the two integers: %d", &x);

    printf("Printed using %%d: %d\n", x);
    printf("Printed using %%i: %3i\n", x);
    return (0);
}