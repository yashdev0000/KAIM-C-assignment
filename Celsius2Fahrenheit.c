#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Asking the user to enter temperature in Celsius
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);

    // Converting Celsius to Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Displaying the result
    printf("%.2f°C is equal to %.2f°F\n", celsius, fahrenheit);

    return 0;
}