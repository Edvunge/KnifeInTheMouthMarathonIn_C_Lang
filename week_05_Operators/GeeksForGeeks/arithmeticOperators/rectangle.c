#include <stdio.h>

int main(void) {

    int length = 10;
    int breadth = 5;

    int area, perimeter;

    area = length * breadth;

    perimeter = 2 * (length + breadth);

    printf("Area = %d\nPerimeter = %d", area , perimeter);

    return (0);
}