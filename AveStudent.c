#include <stdio.h>

int main() {
    int n, i;
    float score, sum = 0, avg;

    printf("Enter the number of students (2-20): ");
    scanf("%d", &n);

    while (n < 2 || n > 20) {
        printf("Invalid number of students. Please enter a number between 2 and 20: ");
        scanf("%d", &n);
    }

    for (i = 0; i < n; i++) {
        printf("Enter score for student %d: ", i+1);
        scanf("%f", &score);
        sum += score;
    }

    avg = sum / n;
    printf("The average score of %d students is %.2f\n", n, avg);

    return 0;
}