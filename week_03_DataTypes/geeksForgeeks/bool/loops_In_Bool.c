#include <stdbool.h>
#include <stdio.h>

int main() {

    bool a = true;
    int  i = 0;

    while (a) {
        printf("i is %d\n", i);
        i++;

        if (i > 5) {
            a = false;
        }
    }

    return (0);
}