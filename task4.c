#include <stdio.h>
// A bank approves a loan if:
//  Salary ≥ 40,000 AND
//  Age ≥ 25.
// Otherwise loan is rejected.
// Write a program to ask salary and age, then display whether the loan is approved or
// not
int main() {
    int salary, age;
    printf("Enter your salary: ");
    scanf("%d", &salary);
    printf("Enter your age: ");
    scanf("%d", &age);
    if (salary >= 40000 && age >= 25) {
        printf("Congratulations!\t Your loan has been approved.\n");
    } else {
        printf("Your loan application has been rejected.\n");
    }
    return 0;
}