#include <stdio.h>

int main(void) {

    int i = 10;
    int j = 20;

    const int* const ptr = &i;

    printf("ptr: %d\n", *ptr);

    //ptr = &j;
    //*ptr = 100;
    return (0);
}