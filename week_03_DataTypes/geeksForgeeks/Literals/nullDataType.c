#include <stdio.h>

int main(void) {
    int val = 30;
    void* ptr = &val;
    printf("%d", *(int*)ptr);

    return (0);
}