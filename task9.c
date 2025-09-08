#include <stdio.h>

// A student can only appear in the final exam if:
// Attendance ≥ 75% AND
// Internal marks ≥ 40.
int main() {
    float attendance;
    int internalMarks;
    printf("Enter your attendance percentage: ");
    scanf("%f", &attendance);
    printf("Enter your internal marks: ");
    scanf("%d", &internalMarks);
    if (attendance >= 75.0 && internalMarks >= 40) {
        printf("You are eligible to appear in the final exam.\n");
    } else {
        printf("You are not eligible to appear in the final exam.\n");
    }
    return 0;
}