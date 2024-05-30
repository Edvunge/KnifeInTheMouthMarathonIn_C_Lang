#include <stdio.h>


int main(void) {
    int i = 0;

    i++; // add one to i (pos-increment)
    i--; // subtract one from i (post-decrement)

    i += 1; // add one to i
    i -= 1; // subtract one from i

    ++i; // add one to i (pre-increment)
    --i; // subtract one from i (pre-decrement)

    i = 10;
    int j = 5 + i++;

    printf("%d, %d\n",i ,j); // 11 , 15
    return (0);
}