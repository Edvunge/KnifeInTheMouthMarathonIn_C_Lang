#include <stdio.h>


int main(void) {

    int x = 10, y = 20; // First assign 10 to x, then 20 to y

    x = 10; y = 20; 

    x = (1, 2, 3);

    printf("x is %d\n", x);

    for (int i = 0, j = 10; i < 100; i++, j++) {
        printf("\n%d, %d\n", i ,j);
    }
    return (0);
}