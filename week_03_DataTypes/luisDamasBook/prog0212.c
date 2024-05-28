#include <stdio.h>

int main () {
    
    char ch1, ch2;

    printf("Introduza um Caractere: ");
    scanf("%c",&ch1);

    printf("Introduza outro caractere: ");
    scanf("%c",&ch2);

    printf("Os caracteres introdutorios foram '%c' e '%c' \n ",ch1 ,ch2);
    return (0);
}