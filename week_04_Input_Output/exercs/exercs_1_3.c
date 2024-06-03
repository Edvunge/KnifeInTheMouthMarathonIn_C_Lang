// Exercicio 1.3:  Dadas as duas notas de um aluno, informe a sua media final.

#include <stdio.h>

int main(void) {

    double nota1, nota2, mediaFinal;

    printf("Digite a nota 1: ");
    scanf("%lf",&nota1);

    printf("Digite a nota 2: ");
    scanf("%lf",&nota2);

    mediaFinal = (nota1 + nota2/2);
    printf("a media final: %.2lf\n", mediaFinal);

    return (0);
}