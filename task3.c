#include <stdio.h>

// Write a program that takes three numbers and finds the largest number using nested
// if.
int main() {
    int numOne, numTwo, numThree, largest;
    printf("Enter first number: ");
    scanf("%d", &numOne);
    printf("Enter second number: ");
    scanf("%d", &numTwo);
    printf("Enter third number: ");
    scanf("%d", &numThree);

    if (numOne >= numTwo) {
        if (numOne >= numThree) {
            largest = numOne;  // numOne is largest
        } else {
            largest = numThree;  // numThree is largest
        }
    } else {
        if (numTwo >= numThree) {
            largest = numTwo;  // numTwo is largest
        } else {
            largest = numThree;  // numThree is largest
        }
    }
    printf("The largest number is: %d\n", largest);
    return 0;
}