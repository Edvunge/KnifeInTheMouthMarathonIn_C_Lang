#include <stdio.h>

int main() {

    float raio, perimetro;
    double PI = 3.1415927, area;

    printf("Introduza o Raio da Circunferencia: ");
    scanf("%f", &raio);

    area = PI * raio * raio;
    perimetro = 2 * PI * raio;

    printf("Area = %f\nPerimetro = %f\n", area ,perimetro);
    return (0);
}