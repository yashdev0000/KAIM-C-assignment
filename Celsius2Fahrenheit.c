#include <stdio.h>

int main()
 {
    float celsius, fahrenheit;

   
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);

  
    fahrenheit = (celsius * 9 / 5) + 32;

   
    printf("%.2f°C is equal to %.2f°F\n", celsius, fahrenheit);

    return 0;
}