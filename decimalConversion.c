#include <stdio.h>

int main() {
    int decimal;

    // Prompt the user to enter a decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    // Display the number in octal and hexadecimal formats
    printf("Octal: %o\n", decimal);
    printf("Hexadecimal: %x\n", decimal);

    return 0;
}
