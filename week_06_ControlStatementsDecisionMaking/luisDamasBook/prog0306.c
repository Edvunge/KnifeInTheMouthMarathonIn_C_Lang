#include <stdio.h>

int main() {

    float salario;

    printf("Qual o salario: ");
    scanf("%f",&salario);

    if (salario <= 0) {
        printf("salario: Valor Invalido\n");
    } 
    
    if (salario > 1000){
        printf("Imposto = %.2f\n",salario*0.10);
    } else {
        printf("Imposto = %.2f\n",salario*0.05);
    }
    return (0);
}