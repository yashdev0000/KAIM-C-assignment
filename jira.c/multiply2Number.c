#include <stdio.h>

int main() {
    int firstNum, secondNum;

    // Taking input
    printf("Enter two numbers: ");
    scanf("%d %d", &firstNum, &secondNum);

    // Displaying the result
    printf("Multiply of %d and %d is: %d\n", firstNum, secondNum, firstNum * secondNum);

    return 0;
}

