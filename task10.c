#include <stdio.h>

// ATM withdrawal rule:
//  Balance must be greater than withdrawal amount
//  Withdrawal amount must be a multiple of 500
// if both conditions pass, allow withdrawal, else reject.

int main() {
    float balance, withdrawalAmount;
    printf("Enter your account balance: ");
    scanf("%f", &balance);
    printf("Enter the amount to withdraw: ");
    scanf("%f", &withdrawalAmount);

    if (balance >= withdrawalAmount && (int)withdrawalAmount % 500 == 0) {
        balance -= withdrawalAmount;  // Deduct withdrawal amount from balance
        printf("Withdrawal successful!\n New balance: %.2f\n", balance);
    } else {
        printf("Withdrawal rejected!\n Check your balance or check the amount is a multiple of 500.\n");
    }
    return 0;
}