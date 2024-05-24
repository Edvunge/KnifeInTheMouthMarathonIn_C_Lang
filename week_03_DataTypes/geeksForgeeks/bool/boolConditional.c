#include <stdio.h>
#include <stdbool.h>

int main() {

    int a = 3;
    int b = 4;

    if (a > b) {
        printf("a is greater\n");
    } else {
        printf("a is smaller\n");
    }

    printf("%d is the result of a > b", a > b);

    return 0;
}