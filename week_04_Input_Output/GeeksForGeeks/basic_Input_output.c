#include <stdio.h>

int main(void) {

    // variavel section
    int intVariable;
    float floatVariable;
    char charVariable;
    char strVariable[9];

    // integer
    scanf("%d", &intVariable);
    printf("%d", intVariable);


    // float
    scanf("%f ", &floatVariable);
    printf("%f ", floatVariable);
    

    // character
    scanf("%c", &charVariable);
    printf("%c", charVariable);

    // String
    scanf("%s", &strVariable);
    printf("%s", strVariable);
    return (0);
}