#include <stdio.h>

int main(void) {

    int n1, n2;

    printf("Introduza dois numeros: ");
    scanf("%d%d", &n1, &n2);

    printf("O resultado de %d + %d = %d\n", n1, n2, n1 + n2);
    return (0);
}