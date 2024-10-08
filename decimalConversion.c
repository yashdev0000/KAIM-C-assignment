#include <stdio.h>

int main()
 {
    int decimal;

   
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

   
    printf("Octal: %o\n", decimal);
    printf("Hexadecimal: %x\n", decimal);

    return 0;
}
