#include <stdio.h>

int main(void) {

    int x;

    printf("Introduza um N ");
    scanf("%d", &x);

    if (x >= 0)
        printf("Numero Positivo\n");
    else 
        printf("Numero Negativo\n");
    return (0);
}