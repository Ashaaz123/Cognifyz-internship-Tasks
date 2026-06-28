//Program for Student Grade Calculator
#include <stdio.h>

int main() {
    int n, i;
    float grades[100], sum = 0, average;

    // Prompt the user to enter number of subjects
    printf("Enter the number of subjects: ");
    scanf("%d", &n);

    // Input grades
    for (i = 0; i < n; i++) {
        printf("Enter grade for subject %d: ", i + 1);
        scanf("%f", &grades[i]);
        sum += grades[i];
    }

    // Calculate average
    average = sum / n;

    // Display result
    printf("Average grade: %.2f\n", average);

    return 0;
}
