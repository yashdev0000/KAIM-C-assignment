#include <stdio.h>

int main() {
    float marks[5], total = 0, percentage;
    int i;

    // Prompting the user to enter marks for five subjects
    printf("Enter marks for five subjects:\n");

    // Loop to take input for all 5 subjects
    for (i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i];  // Add each subject's marks to total
    }

    // Calculate the percentage (assuming total marks per subject is 100)
    percentage = (total / 500) * 100;

    // Display total marks and percentage
    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;