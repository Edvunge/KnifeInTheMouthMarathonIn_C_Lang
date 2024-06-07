#include <stdio.h>

int main(void) {

    int x;

    printf("Introduza um N ");
    scanf("%d", &x);

    if (x != 0)
        printf("%d nao e zero!!!\n",x);
    else 
        printf("%d e igual a zero!!!\n",x);

    return (0);
}