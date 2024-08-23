#include <stdio.h>
#define PI 3.14159

int main() {
    float radius, area, perimeter;

    // Prompt the user to enter the radius of the circle
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate the area and perimeter (circumference) of the circle
    area = PI * radius * radius;
    perimeter = 2 * PI * radius;

    // Display the results
    printf("Area of the circle: %.2f\n", area);
    printf("Perimeter (Circumference) of the circle: %.2f\n", perimeter);

    return 0;
}
