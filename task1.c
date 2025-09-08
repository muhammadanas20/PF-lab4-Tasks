#include <stdio.h>

// A shopkeeper gives a discount of 10% if the total bill is more than 5000, otherwise
// no discount.
// Write a program to ask the user for the bill amount and display the final payable
// amount..
int main(){
    float billAmount, finalpayableAmount;
    printf("Enter the bill amount in rupees: ");
    scanf("%f", &billAmount);
    if(billAmount > 5000){
        finalpayableAmount = billAmount - (billAmount * 0.10);  // 10% discount
    } else {
        finalpayableAmount = billAmount;
    }
    printf("The final payable amount in rupees is: %.2f\n", finalpayableAmount);
    return 0;
}