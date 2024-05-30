#include <stdio.h>
#include <stdbool.h>

int main(void) {

    bool x = false, y;
    
    if (x <= 10 && y > 20)
        printf("Doing Somenthing!\n");
    
    if (!(x < 12)) 
        printf("x is not less than 12\n");

    return (0);
}