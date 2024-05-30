#include <stdio.h>

int main(void) {

    int x = 0; 

    if (x == 10)  printf("x is 10\n");

    // BAD ERROR EXAMPLE
    if (x == 10) {
        printf("this happens if x is 10\n");
        printf("this happens ALWAYS\n");  // Surprise!! Unconditional!
    }

    return (0);
}