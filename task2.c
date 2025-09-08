#include <stdio.h>
// A cinema charges ticket prices based on age:
//  Age <12 → 200
//  Age between 12 and 18 → 300
//  Age 18–60 → 500
//  Age > 60 → 250
// Write a program to calculate ticket price based on age entered by the user
int main() {
    int age, ticketPrice;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age < 12) {
        ticketPrice = 200;             // for children under 12
    } else if (age >= 12 && age < 18) {
        ticketPrice = 300;            // for teenagers between 12 and 18
    } else if (age >= 18 && age <= 60) {
        ticketPrice = 500;            // for adults between 18 and 60
    } else {
        ticketPrice = 250;            // for senior citizens over 60
    }
    printf("The ticket price is: %d\n", ticketPrice);  
    return 0;
}