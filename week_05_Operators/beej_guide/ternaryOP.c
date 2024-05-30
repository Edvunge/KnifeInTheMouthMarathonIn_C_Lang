#include <stdio.h>


int main(void) {

    int y = 0, x = 1;

    y += x > 10 ? 17 : 37;

    // outra forma
    printf("The number %d is %s.\n",x , x % 2 == 0? "even": "odd");

    return (0);
}