#include <stdio.h>

int main() {
    
    // number to be printed
    int num = 123456;
    
    // printing the num with 10 width and getting the
    // printed characters in char_printed
    printf("Printing num with width 10: ");
    
    int chars_printed = printf("%10d", num);
    
    printf("\nNumber of characters printed: %d",
           chars_printed);
 
    // specifying with using other method
    printf("\nPrinting num with width 3: ");
    chars_printed = printf("%*d", 3, num);
    
    printf("\nNumber of characters printed: %d",
           chars_printed);
 
    return 0;
}