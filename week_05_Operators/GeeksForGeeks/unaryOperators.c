#include <stdio.h>

int main(void) {

    int a = 10, b = 4, res;

    printf("Post Increment and Decrement\n");

    res = a++; 
    printf("a is %d and result %d\n", a, res);

    res = a--; 
    printf("a is %d and result %d\n", a, res); 

    printf("\nPre Increment and Decrement\n");

    res = ++a;

    printf("a is %d and result is %d\n", a, res);


    res = --a;

    printf("a is %d and result is %d\n",a ,res);
    
    return (0);
}