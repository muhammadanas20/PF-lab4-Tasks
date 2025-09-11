#include <stdio.h>

// A calculator program:
// Ask the user to enter two numbers and a choice:
//  Addition
// Subtraction
// Multiplication
// Division
// Perform the selected operation using switch case
int main (){
    float numOne, numTwo, result;
    int choice;
    printf("Enter first number: ");
    scanf("%f", &numOne);
    printf("Enter second number: ");
    scanf("%f", &numTwo);
    printf("Choose an operation:\n");
    printf("1. for Addition\n");
    printf("2. for Subtraction\n");
    printf("3. for Multiplication\n");
    printf("4. for Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch(choice){
        case 1:
            result = numOne + numTwo;
            printf("Result: %.2f + %.2f = %.2f\n", numOne, numTwo, result);
            break;
        case 2:
            result = numOne - numTwo;
            printf("Result: %.2f - %.2f = %.2f\n", numOne, numTwo, result);
            break;
        case 3:
            result = numOne * numTwo;
            printf("Result: %.2f * %.2f = %.2f\n", numOne, numTwo, result);
            break;
        case 4:
            if(numTwo != 0){
                result = numOne / numTwo;
                printf("Result: %.2f / %.2f = %.2f\n", numOne, numTwo, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice! Please select a valid operation (1-4).\n");
    }
    return 0;
}
